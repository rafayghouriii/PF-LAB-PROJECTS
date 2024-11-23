
#include <stdio.h>
#define temperature 40
static int count=0;
int counter(int n)
{
    int t;
    for(int i=0;i<n;i++)
    {
        printf("enter temperature:\n");
        scanf("%d",&t);
        if(t>temperature)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    printf("how many temperatures do u want to input?\n");
    int n;
    scanf("%d",&n);
    int c=counter(n);
    printf("%d times limit exceeded.",c);
    return 0;
}