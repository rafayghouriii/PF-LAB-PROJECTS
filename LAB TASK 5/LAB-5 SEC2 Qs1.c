#include <stdio.h>

int main()
{
    int num;
    printf("enter a number");
    scanf("%d",&num);
    if(num%3==0 && num%5==0)
    {
        printf("Divisible");
    }
    else
    {
        printf("Not Divisible");
    }
    


    return 0;
}