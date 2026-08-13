#include <stdio.h>

int main() {
    int num, temp, rem, sum;

    printf("Armstrong numbers from 1 to 500 are:\n");

    for (num = 1; num <= 500; num++) {
        temp = num;
        sum = 0;

        while (temp > 0) {
            rem = temp % 10;
            sum = sum + (rem * rem * rem);
            temp = temp / 10;
        }

        if (sum == num) {
            printf("%d ", num);
        }
    }

    return 0;
}