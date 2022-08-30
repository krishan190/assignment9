#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x, a, b;
    while (1)
    {
        printf("\n Addition");
        printf("\n Subtraction");
        printf("\n Multiplication");
        printf("\n Division");
        printf("\n Exit");
        printf("\n Enter Your choice  :");
        scanf("%d", &x);
        switch (x)
        {
        case 1:
            printf("Enter two numbers:");
            scanf("%d %d", &a, &b);
            printf("sum is %d", a + b);
            break;
        case 2:
            printf("Enter two numbers:");
            scanf("%d %d", &a, &b);
            printf("Minus is %d", a - b);
            break;
        case 3:
            printf("Enter two numbers:");
            scanf("%d %d", &a, &b);
            printf("product is %d", a * b);
            break;
        case 4:
            printf("Enter two numbers:");
            scanf("%d %d", &a, &b);
            printf("Qutient is %d", a / b);
            break;
        case 5:
            printf("I am Exit");
            exit(0);
        default:
            printf("Invalid choice");
        }
    } //End of while
    printf("\n");
}