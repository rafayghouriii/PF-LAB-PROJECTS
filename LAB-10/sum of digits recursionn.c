#include <stdio.h>
int sum(int n)
{
    if(n==0)
    {
        return n;
    }
    else{
    int c=n%10;
    n=n/10;
    return c+sum(n);
    }
}
int main()
{
    int n;
    printf("enter a number\n");
    scanf("%d",&n);
    printf("%d",sum(n));
    return 0;
}