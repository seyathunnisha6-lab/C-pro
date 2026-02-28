#include <stdio.h>
#include <math.h>
int main() {
    double principal, rate, time, ci;
    printf("Enter principal: ");
    scanf("%lf", &principal);
    printf("Enter rate of interest: ");
    scanf("%lf", &rate);
    printf("Enter time (years): ");
    scanf("%lf", &time);

    ci = principal * pow((1 + rate/100), time) - principal;
    printf("Compound Interest = %.2f\n", ci);
    return 0;
}
