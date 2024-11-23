#include <stdio.h>
#include <string.h>

void reverse(char arr[], int start, int end) {
    if (start >= end) {
        return;
    }
    char temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    reverse(arr, start + 1, end - 1);
}

void reversed(char arr[30]) {
    int length = strlen(arr);
    reverse(arr, 0, length - 1);
}

int main() {
    char arr[30];
    printf("Enter a string: ");
    fgets(arr, sizeof(arr), stdin);

    // Use strcspn to find the position of the newline character and terminate the string there
    arr[strcspn(arr, "\n")] = '\0';

    reversed(arr);

    printf("Reversed string: %s\n", arr);
    return 0;
}
