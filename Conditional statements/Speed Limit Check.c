#include <stdio.h>

int main() {
    int speedLimit, vehicleSpeed;

    printf("Enter speed limit: ");
    scanf("%d", &speedLimit);

    printf("Enter vehicle speed: ");
    scanf("%d", &vehicleSpeed);

    if (vehicleSpeed > speedLimit)
        printf("Warning: Speed limit exceeded!");
    else
        printf("Speed is within limit.");

    return 0;
}
