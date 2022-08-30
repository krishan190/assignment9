#include <stdio.h>
int main()
{
    int a, b, c;
    float D, x, y;
    printf("Enter the coefficient of x^2 ,x,and constant term:");
    scanf("%d%d%d", &a, &b, &c);
    D = b * b - 4 * a * c;
    switch (D < 0)
    {
    case 1:
        printf("Roots are Imaginary:");
        break;
    case 0:
        switch (D > 0)
        {
        case 1:
            printf("Roots are Real and distict");
            x = (-b + sqrt(D)) / (2 * a);
            y = (-b - sqrt(D)) / (2 * a);
            printf("\nRoots are %f , %f", x, y);
            break;
        case 0:
            printf("Roots are equal:");
            x = y = -b / (2.0 * a);
            printf("\nRoots are %f", x);
            break;
        }
    }
    printf("\n");
}