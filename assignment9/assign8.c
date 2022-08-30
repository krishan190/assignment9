#include <stdio.h>
int main()
{
    int x;
    printf("Enter the value of x");
    scanf("%d", &x);
    switch (x > 0)
    {
    case 1:
        printf("No is positive and covert to Negative %d", -x);
        break;
    case 0:
        printf("No is Negative and convert to positive %d", -x);
        break;
    }
    printf("\n");
}