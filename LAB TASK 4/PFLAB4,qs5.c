
#include <stdio.h>

int main() {

    int customerid;

    float unitsconsumed, bill,surcharge,newbill;

    printf("Enter customer ID\n");

    scanf("%d",&customerid);

    printf("Enter units consumed\n");

    scanf("%f",&unitsconsumed);

    
    if(unitsconsumed<=199){

        bill=unitsconsumed*16.20;

    }

    else if(unitsconsumed>=200 && unitsconsumed<300){

    bill=unitsconsumed*20.10;

    }

    else if(unitsconsumed>=300 && unitsconsumed<500){

         bill=unitsconsumed*27.10;

    }

    else if(unitsconsumed>=500){

         bill=unitsconsumed*35.90;

    }

    if(bill>18000){

        surcharge=0.15*bill;

        newbill=bill+surcharge;

        printf("Customer ID:%d\n",customerid);

        printf("unitsconsumed: %.2f\n",unitsconsumed);

        printf("Amount charges: %.2f\n",bill);

        printf("Surcharge amount: %.2f\n",surcharge);

        printf("Net amount paid by user: %.2f\n",newbill);

        }

        else{

        printf("Customer ID:%d\n",customerid);

        printf("unitsconsumed: %2f\n",unitsconsumed);

        printf("Amount charges: %2f\n",bill);

        printf("Net amount paid by user: %2f\n",bill);

            
        }

    

    return 0;

}