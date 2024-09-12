#include <stdio.h>


int main(){

  float taxrate=0,salary=0,tax=0,newsalary=0;

  printf("Enter tax rate");

  scanf("%f",&taxrate);

  printf("Enter salary");

  scanf("%f",&salary);

  tax=taxrate*salary;

  printf("Tax to be paid is %f",tax);

  newsalary=salary-tax;

  printf("New salary is %f",newsalary);

 

    return 0;

}