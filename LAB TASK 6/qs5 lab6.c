
#include <stdio.h>

void main()
{
    int a=1;
    int b=2;
    int c;
    printf("%d\n%d\n",a,b);
    for(int i=3;i<=9;i++)
    {
        c=a*b;
        printf("%d\n",c);
        a=b;
        b=c;
        
        
    }

}