#include <stdio.h>

int main()
{
    printf("enter number of elements\n");
    int i,n,min,max;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    min=arr[0];
    for(i=1;i<n;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    printf("minimum number is %d\n",min);
    printf("maximum number is %d\n",max);

    return 0;
}