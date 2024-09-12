#include <stdio.h>

int main(){

  int a,b,temp ;

  
printf("Enter first integer");

  scanf("%d",&a);

  
printf("Enter second integer");

  scanf("%d",&b);

  
temp=a;

  a=b;

  b=temp;

  
printf("Value of a is %d",a);

  printf("Value of b is %d",b);


  return 0;

}