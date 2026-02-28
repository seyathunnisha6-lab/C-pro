#include <stdio.h>
int main() {
    int qty;
    float price, total, discount = 0;
    printf("Enter quantity: ");
    scanf("%d", &qty);
    printf("Enter price per item: ");
    scanf("%f", &price);

    total = qty * price;

    if (total >= 1000)
        discount = 0.10 * total;
    else if (total >= 500)
        discount = 0.05 * total;

    printf("Total cost: %.2f\n", total);
    printf("Discount: %.2f\n", discount);
    printf("Final amount: %.2f\n", total - discount);

    return 0;
}
