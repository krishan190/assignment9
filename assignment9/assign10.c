#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c;
    float D, x, y;
    printf("Enter the coefficient of x^2 ,x and constant term:");
    scanf("%d%d%d", &a, &b, &c);
    D = b * b - 4 * a * c;
    if (D < 0)
        printf("Roots are Imaginary:");
    if (D == 0)
    {
        printf("Both roots are equal:");
        x = -b / (2.0 * a);
        printf("Root is %f", x);
    }
    if (D > 0)
    {
        printf("Roots are real and distinct:");
        x = (-b + sqrt(D)) / (2 * a);
        y = (-b - sqrt(D)) / (2 * a);
        printf("Roots are %f , %f", x, y);
    }
    printf("\n");
}