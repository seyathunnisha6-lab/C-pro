#include <stdio.h>
int main() {
    int limit, speed;
    printf("Enter speed limit: ");
    scanf("%d", &limit);
    printf("Enter vehicle speed: ");
    scanf("%d", &speed);

    if (speed > limit)
        printf("Warning: Speed exceeds limit!\n");
    else
        printf("Speed is within limit.\n");

    return 0;
}
