#include <stdio.h>

int main() {
    int number = 65536;
    for (int i = 2; number >=1; i++)
    {
        printf("%d\n",number);
        number = number / i;
    }
    printf("0\n");

    return 0;
}