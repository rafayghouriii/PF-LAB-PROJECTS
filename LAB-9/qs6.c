#include <stdio.h>
void maxmin(int arr[],int n)
{
    int max=arr[0];
    int min=arr[0];
    for(int i=0;i<n;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
        if(min>arr[i])
        {
            min=arr[i];
        }
    }
    printf("max: %d\nmin: %d",max,min);
}
int main()
{
    int n;
    printf("enter number of elements in an array\n");
    scanf("%d",&n);
    printf("enter elements in an array\n");
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    maxmin(arr,n);
    return 0;
}