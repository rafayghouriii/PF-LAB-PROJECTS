#include <stdio.h>

int main()
{
    int totalterms=6;
    int a=1;
    int b=2;
    int c;
    printf("%d\n%d\n",a, b);
    
    for(int i=3;i<=totalterms;i++)
    {
        c=a+b;
        printf("%d\n", c);
        a=b;
        b=c;
    
    }
    
    

    return 0;
}