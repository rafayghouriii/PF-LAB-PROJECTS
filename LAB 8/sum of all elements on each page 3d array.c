// Online C compiler to run C program online
#include <stdio.h>

int main()
{
    int a[2][3][3];
    printf("enter elements in the array\n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            for(int k=0;k<3;k++)
            {
                scanf("%d",&a[i][j][k]);
            }
        }
    }
    int sum=0;
    for(int i=0;i<2;i++)
    {
        sum=0;
        for(int j=0;j<3;j++)
        {
            for(int k=0;k<3;k++)
            {
                sum=sum+a[i][j][k];
            }
        }
        printf("Sum of %d page is %d\n",i,sum);
    }
    return 0;
}