#include <stdio.h>
int main()
{
    int age,income,creditscore;
    printf("enter your age\n");
    scanf("%d",&age);
    printf("enter your income\n");
    scanf("%d",&income);
    printf("enter your credit score\n");
    scanf("%d",&creditscore);
    if(age>=18 && income>=25000)
    {
        if(creditscore>500 && creditscore<=850)
        {
            printf("eligible for loan\n");
        }
        else
        {
            printf("not eligible for loan\n");
        }
    }
    else
    {
        printf("not eligible for loan\n");
    }

    return 0;
}