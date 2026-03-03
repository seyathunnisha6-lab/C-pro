#include <stdio.h>

int main() {
    int x, y, z;

    printf("Enter x y z: ");
    scanf("%d %d %d", &x, &y, &z);

    if (x == 0 && y == 0 && z == 0)
        printf("Origin");
    else if (x == 0 && y == 0)
        printf("Z-axis");
    else if (x == 0 && z == 0)
        printf("Y-axis");
    else if (y == 0 && z == 0)
        printf("X-axis");
    else if (x == 0)
        printf("YZ-plane");
    else if (y == 0)
        printf("XZ-plane");
    else if (z == 0)
        printf("XY-plane");
    else
        printf("Point lies in space");

    return 0;
}
