#include <stdio.h>
int main()
{
    int x;
    printf("Enter the value of n:");
    scanf("%d", &x);
    switch (x % 100 == 0) //To check for century year
    {
    case 1:
        switch (x % 400 == 0) //To check for leap year
        {
        case 1:
            printf("Leap year:");
            break;
        case 0:
            printf("Non leap year");
            break;
        }
        break;
    case 0: //To check for ordinary year
        switch (x % 4 == 0)
        {
        case 1:
            printf("Leap year");
            break;
        case 0:
            printf("Non leap year");
            break;
        }
    }
}