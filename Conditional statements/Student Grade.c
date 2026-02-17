#include <stdio.h>
int main() {
    int marks;
    printf("Enter marks: ");
    scanf("%d", &marks);

    if(marks >= 95)
        printf("Grade A");
    else if(marks >= 85)
        printf("Grade B");
    else if(marks >= 75)
        printf("Grade C");
    else if(marks >= 65)
        printf("Grade D");
    else
        printf("Grade F");

    return 0;
}
