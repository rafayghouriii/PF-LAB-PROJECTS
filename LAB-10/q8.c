#include <stdio.h>
int linearSearch(int arr[], int size, int target, int index) {
    if (index >= size) {
        return -1; 
    }

    if (arr[index] == target) {
        return index;
    }

    return linearSearch(arr, size, target, index + 1);
}

int main() {
    int arr[] = {2, 4, 66, 78, 10, 72, 34};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;

    printf("Enter the target element to search: ");
    scanf("%d", &target);
    int result = linearSearch(arr, size, target, 0);

    if (result != -1) {
        printf("Element %d found at index %d.\n", target, result);
    } else {
        printf("Element %d not found in the array.\n", target);
    }

    return 0;
}
