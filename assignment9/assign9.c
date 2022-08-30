#include <stdio.h>
int main()
{
    int x;
    printf("Enter the value of x :");
    scanf("%d", &x);
    switch (x % 2 == 0)
    {
    case 1:
        printf("Nearest odd number: %d", x + 1);
        break;
    case 0:
        printf("Nearest odd number: %d", x);
    }
    printf("\n");
}