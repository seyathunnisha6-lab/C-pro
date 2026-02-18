#include <stdio.h>
int main() {
    int experience;
    printf("Enter years of experience: ");
    scanf("%d", &experience);

    if(experience >= 5)
        printf("Bonus Eligible");
    else
        printf("Not Eligible for Bonus");

    return 0;
}
