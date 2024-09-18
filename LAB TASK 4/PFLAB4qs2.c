#include <stdio.h>

int main() {
    float num1,num2;
    char operator;
     printf("Enter a number");
    scanf("%f",&num1);
    printf("Enter an operator '+' or '-' or '*' or '/'");
    scanf(" %c",&operator);
    printf("Enter second number");
    scanf("%f",&num2);
    switch(operator){
    case '+':
                printf("%f", num1+num2);
                break;
    case '-':
                printf("%f", num1-num2);
                break;
    case '*':   
                printf("%f", num1*num2);
                break;
    case '/':
                printf("%f", num1/num2);
                break;
    }
             

    return 0;
}