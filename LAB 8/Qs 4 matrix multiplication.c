#include <stdio.h>
int main()
{
    int m,n,p,q;
    printf("enter number of rows of first matrix\n");
    scanf("%d",&m);
    printf("enter number of columns of first matrix\n");
    scanf("%d",&n);
    int a[m][n];
    printf("enter elements of first matrix\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter number of rows of second matrix\n");
    scanf("%d",&p);
    printf("enter number of columns of second matrix\n");
    scanf("%d",&q);
    int b[p][q];
    printf("enter elements of second matrix\n");
    for(int i=0;i<p;i++)
    {
        for(int j=0;j<q;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    if(n!=p)
    {
        printf("matrix cannot be multiplied");
    }
    else 
    {
        int res[m][q];
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<q;j++)
            {
                res[i][j]=0;
                for(int k=0;k<q;k++)
                {
                    res[i][j]=res[i][j]+a[i][k]*b[k][j];
                }
            }
        }
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<q;j++)
            {   
                printf("%d ",res[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}