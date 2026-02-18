#include <stdio.h>
int main() {
    int level;
    printf("Enter water level (in meters): ");
    scanf("%d", &level);

    if(level > 10)
        printf("Flood Alert");
    else
        printf("Safe Level");

    return 0;
}
