
#include <stdio.h>
#include <string.h>

typedef struct flightinfo
{
    int flightnum;
    char depcity[30];
    char destinationcity[30];
    char date[30];
    int avseats;
} flightinfo;
void display(struct flightinfo arr[],int numofFlights)
{
    printf("Flight Details:\n");
    printf("Flightnum      Departure city                  Destination City         Date          Available seats");
    for(int i=0;i<numofFlights;i++)
    {
        printf("%d             %s                           %s                      %s                  %d",arr[i].flightnum,arr[i].depcity,arr[i].destinationcity,arr[i].date,arr[i].avseats);
    }
}
void bookseats(struct flightinfo arr[],int numofFlights)
{
    int flightnumber;
    printf("Enter Flight Number to book a seat\n");
    scanf("%d",&flightnumber);
    for(int i=0;i<numofFlights;i++)
    {
        if(flightnumber==arr[i].flightnum)
        {
            if(arr[i].avseats>0)
            {
                arr[i].avseats--;
                printf("Flight booked successfully\n");
            }
            else
            {
                printf("Insufficient number of seats\n");
            }
        }
    }
}
int main()
{
    int numofFlights=2;
    flightinfo arr[numofFlights];
    for(int i=0;i<numofFlights;i++)
    {
        printf("Enter Flight Number\n");
        scanf("%d",&arr[i].flightnum);
        printf("Enter Departure City\n");
        getchar();
        fgets(arr[i].depcity,30,stdin);
        arr[i].depcity[strcspn(arr[i].depcity, "\n")]='\0';
        // getchar();
        printf("Enter Destination City\n");
        fgets(arr[i].destinationcity,30,stdin);
        arr[i].destinationcity[strcspn(arr[i].destinationcity, "\n")]='\0';
        // getchar();
        printf("Enter Date\n");
        fgets(arr[i].date,30,stdin);
        arr[i].date[strcspn(arr[i].date, "\n")]='\0';
        printf("Enter available seats\n");
        scanf("%d",&arr[i].avseats);
    }
    bookseats(arr,numofFlights);
    display(arr,numofFlights);

    return 0;
}