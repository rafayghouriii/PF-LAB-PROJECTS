
#include <stdio.h>

int main() {
    int num;
    int sum=0;
    printf("enter a number\n");
    scanf("%d",&num);
    while(num!=0)
    {
        sum=sum+num;
        printf("current sum is %d\n",sum);
        printf("enter another number\n");
        scanf("%d",&num);
    }
    printf("final sum is %d\n",sum);

    return 0;
}