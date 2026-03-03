#include <stdio.h>

int main() {
    float amount, discount = 0;

    printf("Enter purchase amount: ");
    scanf("%f", &amount);

    if (amount > 10000)
        discount = amount * 0.15;
    else if (amount > 5000)
        discount = amount * 0.10;
    else if (amount > 2000)
        discount = amount * 0.05;

    printf("Discount = %.2f\n", discount);
    printf("Final Amount = %.2f", amount - discount);

    return 0;
}
