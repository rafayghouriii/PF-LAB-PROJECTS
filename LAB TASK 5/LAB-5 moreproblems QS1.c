#include <stdio.h>
int main()
{
    int num1,num2,num3;
    printf("enter 3 numbers");
    scanf("%d",&num1);
    scanf("%d",&num2);
    scanf("%d",&num3);
    if(num1>num2)
    {
        if(num1>num3)
        {
            printf("num1 is the greatest");
        }
        else
        {
            printf("num3 is the greatest");
        }
    }
    else if(num2>num1)
    {
        if(num2>num3)
        {
            printf("num2 is the greatest");
        }
        else
        {
            printf("num3 is greatest");
        }
    }
    else if(num3>num1)
    {
        if(num3>num2)
        {
            printf("num3 is the greatest");
        }
        else
        {
            printf("num2 is greatest");
        }
    }

    return 0;
}