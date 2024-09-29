#include <stdio.h>

int main() {
    int age;
    printf("Enter age");
    scanf("%d/n",&age);
    if(age>0 && age<=19)
    {
        if(age>0 && age<13)
        {
            printf("child",age);
        }
        else
        {
            printf("teenager",age);
        }
    }

       
    else if(age>19)
    {
        if(age<65)
        {
            printf("adult",age);
        }
        else
        {
        printf("senior",age);
        }
    }



    return 0;
}
