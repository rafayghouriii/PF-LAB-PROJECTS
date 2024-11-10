#include <stdio.h>
int product(int a,int b)
{
    int c=a*b;
    return c;
}
int main()
{
    int a,b;
    printf("enter number 1\n");
    scanf("%d",&a);
    printf("enter number 2\n");
    scanf("%d",&b);
    int c=product(a,b);
    printf("product: %d",c);
    
    return 0;
}