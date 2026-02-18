#include <stdio.h>
int main() {
    int age;
    printf("Enter age: ");
    scanf("%d", &age);

    if(age < 5)
        printf("Free Ticket");
    else if(age >= 60)
        printf("50%% Discount");
    else
        printf("No Discount");

    return 0;
}
