#include <stdio.h>
int main()
{
    int age;
    char cship;
    printf("Enter age");
    scanf("%d",&age);
    printf("Enter Citiznship");
    scanf(" %c",&cship);
    if(age>=18 && cship=='P' || cship=='p')
    {
        printf("Eligible to vote");
    }
    else
    {
        printf("Not eligible to vote");
    }

    return 0;
}