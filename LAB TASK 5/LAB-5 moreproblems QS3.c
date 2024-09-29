
#include <stdio.h>

int main()
{
    char charc,encrypted,decrypted;
    int key;
    printf("enter charachter to encrypt\n");
    scanf(" %c",&charc);
    printf("enter an encryption key \n");
    scanf("%d",&key);
    encrypted=key^charc;
    printf("encrypted character is %c\n",encrypted);
    decrypted=encrypted^key;
    printf("decrypted character is %c\n",decrypted);
    
    

    return 0;
}