#include <stdio.h>
int main() {
    int signal;
    printf("Enter signal (1-Red, 2-Yellow, 3-Green): ");
    scanf("%d", &signal);

    if(signal == 1)
        printf("Stop");
    else if(signal == 2)
        printf("Get Ready");
    else if(signal == 3)
        printf("Go");
    else
        printf("Invalid Signal");

    return 0;
}
