#include <stdio.h>

int main() {
    float salary, increment = 0;
    int rating;

    printf("Enter current salary: ");
    scanf("%f", &salary);

    printf("Enter performance rating (1-5): ");
    scanf("%d", &rating);

    if (rating == 1)
        increment = 0;
    else if (rating == 2)
        increment = salary * 0.05;
    else if (rating == 3)
        increment = salary * 0.10;
    else if (rating == 4)
        increment = salary * 0.15;
    else if (rating == 5)
        increment = salary * 0.20;
    else
        printf("Invalid Rating");

    if (rating >= 1 && rating <= 5) {
        printf("Increment = %.2f\n", increment);
        printf("New Salary = %.2f", salary + increment);
    }

    return 0;
}
