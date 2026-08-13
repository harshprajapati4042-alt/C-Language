#include <stdio.h>

int main() {
    int n, a = 0, b = 1, c, i;
    int sum = 0;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (i = 1; i <= n; i++) {
        printf("%d ", a);
        sum = sum + a;
        c = a + b;
        a = b;
        b = c;
    }

    printf("Sum of fibonnaci series is:%d",sum);
    return 0;
}