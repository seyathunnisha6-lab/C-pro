#include <stdio.h>
int main() {
    int a, b, c;
    printf("Enter three sides of triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a+b>c && a+c>b && b+c>a) {
        printf("Triangle is valid.\n");
        if (a==b && b==c)
            printf("Equilateral triangle.\n");
        else if (a==b || b==c || a==c)
            printf("Isosceles triangle.\n");
        else
            printf("Scalene triangle.\n");
    } else {
        printf("Triangle is not valid.\n");
    }
    return 0;
}
