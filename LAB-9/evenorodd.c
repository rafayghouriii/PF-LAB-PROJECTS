#include <stdio.h>
void check(int a)
{
    if(a%2==0)
    {
        printf("even\n");
    }
    else
    {
        printf("odd\n");
    }
}
int main()
{
    int a,b;
    printf("enter number 1\n");
    scanf("%d",&a);
    check(a);
   
    
    return 0;
}