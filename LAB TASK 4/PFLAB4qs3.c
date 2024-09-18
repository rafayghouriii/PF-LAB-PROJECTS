#include <stdio.h>

int main() {
    char charc;
    printf("Input a character");
    scanf("%c",&charc);
    if(charc>=97 && charc<=122){
        printf("It is a small alphabet");

    }
    else if(charc>=65 && charc<=90){
        printf("It is a capital alphabet");
    }
    else if(charc>=48 && charc<=57){
        printf("It is a digit");
    }
    else if(charc>=33 && charc<=47){
        printf("It is a special character");
    }
    

 
    return 0;
}