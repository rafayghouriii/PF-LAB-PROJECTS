#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_RECORDS 5

struct team_member {
    char player_name[20];
    char team_name[20];
};

struct bowler {
    char role[10];
    char hand[5];
    struct team_member member;
};

struct batter {
    char position[10];
    char hand_preference[8];
    struct bowler bowler_details;
};

void addRecords();
void displayRecords();
void modifyRecord();
void removeRecord();

int main() {
    int option;
    while (1) {
        printf("\n--- Sports Management System ---\n");
        printf("1. Add Records\n");
        printf("2. View Records\n");
        printf("3. Update Record\n");
        printf("4. Remove Record\n");
        printf("5. Exit\n");
        printf("Enter your option: ");
        scanf("%d", &option);

        switch (option) {
            case 1:
                addRecords();
                break;
            case 2:
                displayRecords();
                break;
            case 3:
                modifyRecord();
                break;
            case 4:
                removeRecord();
                break;
            case 5:
                exit(0);
            default:
                printf("Invalid option! Try again.\n");
        }
    }
    return 0;
}

void addRecords() {
    FILE *file = fopen("records.txt", "a+");
    if (!file) {
        printf("File error.\n");
        return;
    }

    int count;
    printf("Enter the number of records to add (max %d): ", MAX_RECORDS);
    scanf("%d", &count);

    if (count > MAX_RECORDS) {
        printf("Maximum number of records is %d.\n", MAX_RECORDS);
        fclose(file);
        return;
    }

    for (int i = 0; i < count; i++) {
        struct batter data;

        printf("Enter details for record %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", data.bowler_details.member.player_name);
        printf("Team: ");
        scanf("%s", data.bowler_details.member.team_name);
        printf("Bowler Role (seamer, pacer, spinner, N/A): ");
        scanf("%s", data.bowler_details.role);
        printf("Bowling Hand (left, right, N/A): ");
        scanf("%s", data.bowler_details.hand);
        printf("Batter Position (top, middle, lower, N/A): ");
        scanf("%s", data.position);
        printf("Hand Preference (lefty, righty, N/A): ");
        scanf("%s", data.hand_preference);

        fwrite(&data, sizeof(struct batter), 1, file);
    }

    printf("Records added.\n");
    fclose(file);
}

void displayRecords() {
    FILE *file = fopen("records.txt", "r");
    if (!file) {
        printf("File error.\n");
        return;
    }

    struct batter data;
    printf("\n--- Records List ---\n");
    while (fread(&data, sizeof(struct batter), 1, file)) {
        printf("\nName: %s\n", data.bowler_details.member.player_name);
        printf("Team: %s\n", data.bowler_details.member.team_name);
        printf("Bowler Role: %s\n", data.bowler_details.role);
        printf("Bowling Hand: %s\n", data.bowler_details.hand);
        printf("Batter Position: %s\n", data.position);
        printf("Hand Preference: %s\n", data.hand_preference);
    }

    fclose(file);
}

void modifyRecord() {
    FILE *file = fopen("records.txt", "r+");
    if (!file) {
        printf("File error.\n");
        return;
    }

    char name[20];
    printf("Enter the name of the record to update: ");
    scanf("%s", name);

    struct batter data;
    int exists = 0;
    long position;

    while (fread(&data, sizeof(struct batter), 1, file)) {
        if (strcmp(data.bowler_details.member.player_name, name) == 0) {
            exists = 1;
            position = ftell(file) - sizeof(struct batter);

            printf("Enter new details for %s:\n", name);
            printf("Name: ");
            scanf("%s", data.bowler_details.member.player_name);
            printf("Team: ");
            scanf("%s", data.bowler_details.member.team_name);
            printf("Bowler Role (seamer, pacer, spinner, N/A): ");
            scanf("%s", data.bowler_details.role);
            printf("Bowling Hand (left, right, N/A): ");
            scanf("%s", data.bowler_details.hand);
            printf("Batter Position (top, middle, lower, N/A): ");
            scanf("%s", data.position);
            printf("Hand Preference (lefty, righty, N/A): ");
            scanf("%s", data.hand_preference);

            fseek(file, position, SEEK_SET);
            fwrite(&data, sizeof(struct batter), 1, file);
            printf("Record updated.\n");
            break;
        }
    }

    if (!exists) {
        printf("Record not found.\n");
    }

    fclose(file);
}

void removeRecord() {
    FILE *file = fopen("records.txt", "r");
    FILE *temp_file = fopen("temp_records.txt", "w");

    if (!file || !temp_file) {
        printf("File error.\n");
        return;
    }

    char name[20];
    printf("Enter the name of the record to remove: ");
    scanf("%s", name);

    struct batter data;
    int exists = 0;

    while (fread(&data, sizeof(struct batter), 1, file)) {
        if (strcmp(data.bowler_details.member.player_name, name) != 0) {
            fwrite(&data, sizeof(struct batter), 1, temp_file);
        } else {
            exists = 1;
        }
    }

    fclose(file);
    fclose(temp_file);

    remove("records.txt");
    rename("temp_records.txt", "records.txt");

    if (exists) {
        printf("Record removed.\n");
    } else {
        printf("Record not found.\n");
    }
}
