#include <stdio.h>


int main()
{
    int num;
    printf("enter number");
    scanf("%d",&num);
    if(num==0)
    {
        printf("Number is zero");
    }
    else
    {
        num>0 ? printf("Number is Positive"):printf("Number is Negative");
    }
    return 0;
}