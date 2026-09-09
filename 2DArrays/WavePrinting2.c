#include <stdio.h>

int main() {
    int r, c;

    printf("Enter the no of rows: ");
    scanf("%d", &r);

    printf("Enter the no of columns: ");
    scanf("%d", &c);

    int arr[r][c];

    printf("Enter the elements:\n");

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\nWave print:\n");

    for (int j = 0; j < c; j++) {

        if (j % 2 == 0) {
            for (int i = r - 1; i >= 0; i--) {
                printf("%d ", arr[i][j]);
            }
        }
        else {
            for (int i = 0; i < r; i++) {
                printf("%d ", arr[i][j]);
            }
        }
    }

    return 0;
}