#include <stdio.h>
int main() {
    float salary;
    printf("Enter salary: ");
    scanf("%f", &salary);

    if(salary >= 25000)
        printf("Loan Approved");
    else
        printf("Loan Rejected");

    return 0;
}
