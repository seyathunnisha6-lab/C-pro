#include <stdio.h>
int main() {
    int points;
    printf("Enter reward points: ");
    scanf("%d", &points);

    if(points >= 1000)
        printf("Gold Coins Rewarded");
    else
        printf("No Reward");

    return 0;
}
