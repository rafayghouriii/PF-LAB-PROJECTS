#include <stdio.h>
int arithmetic(int a, int b)
{
    int n,c;
    printf("enter\n1. addition\n2.multiplication\n3.subtraction\n4.division\n");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
            c=a+b;
            break;
        case 2:
            c=a*b;
            break;
        case 3:
            c=a-b;
            break;
        case 4:
            c=a/b;
            break;
        default:
            printf("invalid input");
    }
    return c;
}
int main()
{
    int a,b,res;
    printf("enter a number\n");
    scanf("%d",&a);
    printf("enter a number\n");
    scanf("%d",&b);
    res=arithmetic(a,b);
    printf("%d",res);
    return 0;
}

