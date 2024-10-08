
#include <stdio.h>

int main() {
    int num,temp;
    int i=1;
    int isPrime=1;
    printf("enter a number");
    scanf("%d",&num);
    if(num>9)
    {
        temp=num;
        while(temp>9)
        {
            temp=temp/10;
            i++;
        }
        printf("multi (%d) digit number",i);
    }
    else
    {
        printf("it is a single digit number");
    }
    if (num <= 1)
    {
        isPrime=0;
    }
    else
    {
        for (int i = 2; i <= num / 2; i++)
        {
            if (num % i == 0)
            {
                isPrime=0;
                break;
            }
        }
    }
    if (isPrime == 1)
    {
        printf("%d is a prime number.\n", num);
    }
    else
    {
        if (num > 1)
        {
            printf("%d is a composite number.\n", num);
        }
        else
        {
            printf("%d is neither prime nor composite.\n", num);
        }
    }
    return 0;
}