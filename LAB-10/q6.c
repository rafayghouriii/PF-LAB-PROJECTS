#include <stdio.h>
#include <string.h>
typedef struct Package
{
    char name[30];
    char destination[30];
    int duration;
    float cost;
    int numofseats;
} Package;
#define MAX_PACKAGES 100
int packagecount=0;
Package arr[MAX_PACKAGES];
void display()
{
    printf("NAME               DESTINATION               DURATION               COST             NUMBER OF SEATS\n");
    for(int i=0;i<packagecount;i++)
    {
        printf(" %s                     %s                        %d                 %.2f                     %d\n",arr[i].name,arr[i].destination,arr[i].duration,arr[i].cost,arr[i].numofseats);
    }
}
void booking(char* bookingname,int numofseats)
{
    for(int i=0;i<packagecount;i++)
    {
        if(strcmp(bookingname,arr[i].name)==0)
        {
            if(numofseats>0);
            {
                numofseats--;
                printf("Booking Successful\n");
            }
            
        }
    }
}
void Addpackage(char* name,char* destination,int duration,float cost,int numofseats)
{
   if (packagecount >= MAX_PACKAGES)
    {
        printf("Another package cannot be added.\n");
        return;
    }

    strcpy(arr[packagecount].name, name);
    strcpy(arr[packagecount].destination, destination);
    arr[packagecount].duration = duration;
    arr[packagecount].cost = cost;
    arr[packagecount].numofseats = numofseats;
    packagecount++;
    printf("Package added successfully!\n");  
}
int main()
{
    int choice;
    while(1)
    {
        printf("1. Add a package\n2. Book a package\n3. Display all packages\n4. Exit");
        printf("enter ur choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                char name[30];
                char destination[30];
                int duration;
                float cost;
                int numofseats;
                printf("Enter name of package:\n");
                getchar(); 
                fgets(name, 30, stdin);
                name[strcspn(name, "\n")] = '\0';

                printf("Enter destination: ");
                fgets(destination, 30, stdin);
                destination[strcspn(destination, "\n")] = '\0';

                printf("Enter duration: ");
                scanf("%d", &duration);

                printf("Enter cost of the package: ");
                scanf("%f", &cost);

                printf("Enter number of number of seats: ");
                scanf("%d", &numofseats);

                Addpackage(name,destination,duration,cost,numofseats);
                break;
            case 2:
                char bookingname[30];
                printf("Enter name of package to book\n");
                getchar(); 
                fgets(bookingname, 30, stdin);
                bookingname[strcspn(bookingname, "\n")] = '\0';
                booking(bookingname,numofseats);
                break;
            case 3:
                display();
                break;
            case 4:
                return;
            default:
                printf("invalid input\n");
                break;
                
        }
    }
    
    return 0;
}