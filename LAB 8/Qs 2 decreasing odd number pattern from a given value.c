#include <stdio.h>
int main()
{
    int n;
    printf("enter a number\n");
    scanf("%d",&n);
    int a=1;
    // 9 7 5 3 1
    // 9 7 5 3
    // 9 7 5
    // 9 7
    // 9
    for(int i=1;i<=(n/2)+1;i++)
    {
        for(int j=n;j>=a;j-=2)
        {
            printf("%d ",j);
        }
        a+=2;
        printf("\n");
    }    
        
    return 0;
}