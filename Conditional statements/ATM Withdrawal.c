#include <stdio.h>

int main() {
    int balance = 5000, withdraw;

    printf("Enter withdrawal amount: ");
    scanf("%d", &withdraw);

    if (withdraw > balance)
        printf("Insufficient Balance");
    else if (withdraw % 100 != 0)
        printf("Invalid Amount (Must be multiple of 100)");
    else
        printf("Transaction Successful");

    return 0;
}
