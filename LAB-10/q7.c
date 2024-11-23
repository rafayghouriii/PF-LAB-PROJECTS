#include <stdio.h>

#define METERS_TO_KILOMETERS 0.001
float convertToKilometers(float meters) {
    static int callCount = 0;
    callCount++;
    printf("Function has been called %d times.\n", callCount);
    return meters * METERS_TO_KILOMETERS;
}

int main() {
    float meters;

    while (1) {
        printf("\nEnter distance in meters (or -1 to exit): ");
        scanf("%f", &meters);

        if (meters == -1) {
            printf("Exiting the program.\n");
            break;
        }
        float kilometers = convertToKilometers(meters);
        printf("%.2f meters is equal to %.2f kilometers.\n", meters, kilometers);
    }

    return 0;
}
