#include <stdio.h>
int main()
{
    int r;
    printf("enter number of rows\n");
    scanf("%d",&r);
    for(int i=1;i<=r;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    

    return 0;
}