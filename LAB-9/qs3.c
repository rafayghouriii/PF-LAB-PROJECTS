#include <stdio.h>
void prime(int a)
{
    int count=0;
   for(int i=1;i<=a;i++)
    {
        if(a%i==0)
        {
            count+=1;
        }
    }
    if(count==2)
    {
        printf("prime number");
    }
    else
    {
        printf("not a prime number");
    } 
}

int main()
{
    int a,count=0;
    printf("enter a number\n");
    scanf("%d",&a);
    prime(a);
    return 0;
}

