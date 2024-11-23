#include <stdio.h>
#include <string.h>

#define MAX_CARS 100

typedef struct Cars {
    char make[30];
    char model[30];
    int year;
    float price;
    float mileage;
} Cars;

Cars arr[MAX_CARS];
int carscount = 0;
void display()
{
    if (carscount == 0)
    {
        printf("No cars available.\n");
        return;
    }

    printf("MAKE                       MODEL                  YEAR          PRICE          MILEAGE\n");
    for (int i = 0; i < carscount; i++) {
        printf("%-25s %-25s %-12d %-12.2f %-12.2f\n",arr[i].make, arr[i].model, arr[i].year, arr[i].price, arr[i].mileage);
    }
}
void searchcar(char *search)
{
    int found = 0;
    printf("MAKE                       MODEL                  YEAR          PRICE          MILEAGE\n");
    for (int i = 0; i < carscount; i++)
    {
        if (strcmp(search, arr[i].make) == 0)
        {
            printf("%-25s %-25s %-12d %-12.2f %-12.2f\n",arr[i].make, arr[i].model, arr[i].year, arr[i].price, arr[i].mileage);
            found = 1;
        }
    }

    if (!found)
    {
        printf("No cars found with the make '%s'.\n", search);
    }
}
void Addcar(char *make, char *model, int year, float price, float mileage)
{
    if (carscount >= MAX_CARS)
    {
        printf("Car list is full! Cannot add more cars.\n");
        return;
    }

    strcpy(arr[carscount].make, make);
    strcpy(arr[carscount].model, model);
    arr[carscount].year = year;
    arr[carscount].price = price;
    arr[carscount].mileage = mileage;
    carscount++;
    printf("Car added successfully!\n");
}

int main()
{
    int choice;
    while (1)
    {
        printf("\n1. Add new car\n2. Search for cars\n3. Display all cars\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                char make[30];
                char model[30];
                int year;
                float price;
                float mileage;
                printf("Enter make of the car: ");
                getchar(); 
                fgets(make, 30, stdin);
                make[strcspn(make, "\n")] = '\0';

                printf("Enter model of the car: ");
                fgets(model, 30, stdin);
                model[strcspn(model, "\n")] = '\0';

                printf("Enter year of the car: ");
                scanf("%d", &year);

                printf("Enter price of the car: ");
                scanf("%f", &price);

                printf("Enter mileage of the car: ");
                scanf("%f", &mileage);

                Addcar(make, model, year, price, mileage);
                break;

            case 2:
                char search[30];
                printf("Enter make of the car to search: ");
                getchar(); 
                fgets(search, 30, stdin);
                search[strcspn(search, "\n")] = '\0';

                searchcar(search);
                break;
            case 3:
                display();
                break;

            case 4:
                printf("Exiting program. Goodbye!\n");
                return 0;

            default:
                printf("Invalid input. Please try again.\n");
        }
    }
}
