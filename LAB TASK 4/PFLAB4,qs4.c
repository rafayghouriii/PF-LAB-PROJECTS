#include <stdio.h>

int main() {
    float amount;
    float savedamount;
    float afterdiscount;
    printf("Enter your amount");
    scanf("%f",&amount);
    if(amount<500){
        printf("You are not eligible for discount. Saved amount is 0 and amount after discount is %f",amount);
    }
    else if(amount>=500 && amount<2000){
        savedamount=amount*0.05;
        printf("Amount saved is %f",savedamount);
        afterdiscount=amount-savedamount;
        printf("Amount after discount is %f",afterdiscount);
    }
    else if(amount>=2000 && amount<=4000){
     savedamount=amount*0.1;
        printf("Amount saved is %f",savedamount);
        afterdiscount=amount-savedamount;
        printf("Amount after discount is %f",afterdiscount);   
    }
    else if(amount>4000 && amount<=6000){
      savedamount=amount*0.2;
        printf("Amount saved is %f",savedamount);
        afterdiscount=amount-savedamount;
        printf("Amount after discount is %f",afterdiscount);   
    }
   else if(amount>6000){
    savedamount=amount*0.35;
        printf("Amount saved is %f",savedamount);
        afterdiscount=amount-savedamount;
        printf("Amount after discount is %f",afterdiscount);    
   }
     
      
    
        
        
    
    
    

    return 0;
}