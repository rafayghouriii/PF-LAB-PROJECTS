#include <stdio.h>
void swap(int a,int b);
int main()
{
    int a,b;
    printf("enter number 1\n");
    scanf("%d",&a);
    printf("enter number 2\n");
    scanf("%d",&b);
    swap(a,b);
    
    return 0;
}
void swap(int a, int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("a=%d\n",a);
    printf("b=%d\n",b);
    
}