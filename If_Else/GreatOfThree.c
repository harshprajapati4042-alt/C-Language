#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the number one:");
    scanf("%d", &a);
    printf("Enter the number two:");
    scanf("%d", &b);
    printf("Enter the number three:");
    scanf("%d", &c);
    if (a == b && b == c)
    {
        printf("All numbers are equal.");
    }
    else if (a >= b && a >= c)
    {
        if (a == b)
            printf("%d is equal to %d and greater than %d.", a, b, c);
        else if (a == c)
            printf("%d is equal to %d and greater than %d.", a, c, b);
        else
            printf("%d is greater than %d and %d.", a, b, c);
    }
    else if (b >= a && b >= c)
    {
        if (b == c)
            printf("%d is equal to %d and greater than %d.", b, c, a);
        else
            printf("%d is greater than %d and %d.", b, a, c);
    }
    else
    {
        printf("%d is greater than %d and %d.", c, a, b);
    } 
    return 0;
}