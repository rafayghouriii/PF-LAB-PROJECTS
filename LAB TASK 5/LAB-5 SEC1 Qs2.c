#include <stdio.h>

int main()
{
    int num;
    printf("enter a number");
    scanf("%d",&num);
    if(num>0)
    {
        if(num%2==0)
        {
            printf("Number is even");
        }
        else
        {
            printf("Number is odd");
        }
        
    }
    else if(num==0)
    {
        printf("Zero");
    }
    else if(num<0)
    {
        printf("Negative");
    }

    return 0;
}