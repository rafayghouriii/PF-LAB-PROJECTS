#include <stdio.h>
int main()
{
    int r;
    printf("enter the range to print prime numbers\n");
    scanf("%d",&r);
    int count=0;
    if(r<=1)
    {
        printf("it is not a prime number\n");
    }
    for(int i=1;i<=r;i++)
    {
        count=0;
        for(int j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                count+=1;
            }
        }
        if(count==2)
        {
            printf("%d is a prime number\n",i);
        }
    }
    
    return 0;
}