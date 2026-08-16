#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        printf("Enter the %d element: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        int flag = 0;

        for (int j = 0; j < n; j++) {
            if (i != j && arr[i] == arr[j]) {
                flag = 1;
                break;
            }
        }

        if (flag == 0) {
            printf("First non-repeating element = %d", arr[i]);
            return 0;
        }
    }

    printf("No non-repeating element found.");

    return 0;
}