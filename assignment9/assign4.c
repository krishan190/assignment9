#include <stdio.h>
int main()
{

    printf("1: To check isosceles tringle:\n");
    printf("2: To check Right angled tringle:\n");
    printf("3: To check equilateral tringle:\n");
    int choice;
    printf("Enter your choice:");
    scanf("%d", &choice);

    int a, b, c;
    printf("Enter the value of a,b and c");
    scanf("%d%d%d", &a, &b, &c);

    switch (choice)
    {
    case 1:
        if (a == b || b == c || c == a)
            printf("isosceles Trinagle:");
        else
            printf("Not isosceles Triangle");
        break;
    case 2:
        if (a * a == b * b + c * c || b * b == c * c + a * a || c * c == a * a + b * b)
            printf("Right Angled triangle");
        else
            printf("Not a right angled Triangle:");
        break;
    case 3:
        if ((a == b) && (b == c))
            printf("Equilateral tringle:");
        else
            printf("Not a equilateral tringle");
        break;
    default:
        printf("Invalid");
    }
    printf("\n");
}