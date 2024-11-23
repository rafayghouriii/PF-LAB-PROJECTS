#include <stdio.h>
#include <string.h>

#define MAX_MOVIES 100

typedef struct {
    char title[50];
    char genre[20];
    char director[50];
    int releaseYear;
    float rating;
} Movie;

Movie movies[MAX_MOVIES];
int movieCount = 0;

void addMovie(const char* title, const char* genre, const char* director, int releaseYear, float rating) {
    if (movieCount >= MAX_MOVIES) {
        printf("Movie limit reached. Cannot add more movies.\n");
        return;
    }

    strcpy(movies[movieCount].title, title);
    strcpy(movies[movieCount].genre, genre);
    strcpy(movies[movieCount].director, director);
    movies[movieCount].releaseYear = releaseYear;
    movies[movieCount].rating = rating;
    movieCount++;
    printf("Movie added successfully!\n");
}

void searchByGenre(const char* genre) {
    int found = 0;
    printf("\nMovies in Genre: %s\n", genre);
    printf("-------------------------------------------------------------\n");
    printf("| Title                | Director            | Year  | Rating |\n");
    printf("-------------------------------------------------------------\n");

    for (int i = 0; i < movieCount; i++) {
        if (strcmp(movies[i].genre, genre) == 0) {
            printf("| %-20s | %-18s | %-5d | %-6.1f |\n",
                   movies[i].title,
                   movies[i].director,
                   movies[i].releaseYear,
                   movies[i].rating);
            found = 1;
        }
    }

    if (!found) {
        printf("No movies found in the genre '%s'.\n", genre);
    }
    printf("-------------------------------------------------------------\n");
}

void displayMovies() {
    if (movieCount == 0) {
        printf("No movies available.\n");
        return;
    }

    printf("\nAll Movies:\n");
    printf("------------------------------------------------------------------------------------\n");
    printf("| Title                | Genre      | Director            | Year  | Rating |\n");
    printf("------------------------------------------------------------------------------------\n");

    for (int i = 0; i < movieCount; i++) {
        printf("| %-20s | %-10s | %-18s | %-5d | %-6.1f |\n",
               movies[i].title,
               movies[i].genre,
               movies[i].director,
               movies[i].releaseYear,
               movies[i].rating);
    }
    printf("------------------------------------------------------------------------------------\n");
}

int main() {
    int choice;

    while (1) {
        printf("\nMovie Management System\n");
        printf("1. Add Movie\n");
        printf("2. Search Movies by Genre\n");
        printf("3. Display All Movies\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 4) {
            printf("Exiting program.\n");
            break;
        }

        switch (choice) {
        case 1: {
            char title[50], genre[20], director[50];
            int releaseYear;
            float rating;

            printf("Enter movie title: ");
            getchar();
            fgets(title, sizeof(title), stdin);
            title[strcspn(title, "\n")] = '\0';

            printf("Enter genre: ");
            fgets(genre, sizeof(genre), stdin);
            genre[strcspn(genre, "\n")] = '\0';

            printf("Enter director: ");
            fgets(director, sizeof(director), stdin);
            director[strcspn(director, "\n")] = '\0';

            printf("Enter release year: ");
            scanf("%d", &releaseYear);

            printf("Enter rating (out of 10): ");
            scanf("%f", &rating);

            addMovie(title, genre, director, releaseYear, rating);
            break;
        }
        case 2: {
            char genre[20];
            printf("Enter genre to search: ");
            getchar();
            fgets(genre, sizeof(genre), stdin);
            genre[strcspn(genre, "\n")] = '\0';

            searchByGenre(genre);
            break;
        }
        case 3:
            displayMovies();
            break;

        default:
            printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
