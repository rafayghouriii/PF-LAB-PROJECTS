#include <stdio.h>
int main()
{
    int r,c;
    printf("enter number of rows\n");
    scanf("%d",&r);
    printf("enter number of columns\n");
    scanf("%d",&c);
    int a[r][c];
    int t[c][r];
    printf("enter number of elements in the array\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<r;j++)
        {
            if(i==j)
            {
                t[i][j]=a[i][j];
            }
            else
            {
                t[i][j]=a[j][i];
            }
        }
        // printf("\n");
    }
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<r;j++)
        {
            printf("%d ",t[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}