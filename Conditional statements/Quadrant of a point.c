#include <stdio.h>
int main() {
    int x, y;
    printf("Enter coordinates (x y): ");
    scanf("%d %d", &x, &y);

    if (x == 0 && y == 0)
        printf("Origin\n");
    else if (x == 0)
        printf("On Y-axis\n");
    else if (y == 0)
        printf("On X-axis\n");
    else if (x > 0 && y > 0)
        printf("First Quadrant\n");
    else if (x < 0 && y > 0)
        printf("Second Quadrant\n");
    else if (x < 0 && y < 0)
        printf("Third Quadrant\n");
    else
        printf("Fourth Quadrant\n");

    return 0;
}
