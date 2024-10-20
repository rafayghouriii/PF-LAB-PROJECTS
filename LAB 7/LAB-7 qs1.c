#include <stdio.h>

int main()
{
    int n,i;
    int sum=0;
    printf("enter number of elements\n");
    scanf("%d",&n);
    int arr[n];
    printf("enter %d elements\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    printf("sum is %d",sum);
    
    return 0;
}