#include <stdio.h>
int main() {
    int age;
    float tuition, expenses;
    printf("Enter age: ");
    scanf("%d", &age);
    printf("Enter annual tuition fee: ");
    scanf("%f", &tuition);
    printf("Enter total annual expenses: ");
    scanf("%f", &expenses);

    if (age >= 18 && age <= 25) {
        if (tuition > expenses)
            printf("Tuition fee is higher than expenses.\n");
        else if (tuition < expenses)
            printf("Expenses are higher than tuition fee.\n");
        else
            printf("Tuition fee and expenses are equal.\n");
    } else {
        printf("Age not in range 18–25.\n");
    }

    return 0;
}
