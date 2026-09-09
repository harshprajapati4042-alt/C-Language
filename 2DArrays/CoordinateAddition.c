#include<stdio.h>

int main(){

    int r,c,l1,r1,l2,r2;
    int sum = 0;

    printf("Enter the no of rows:");
    scanf("%d",&r);

    printf("Enter the no of columns:");
    scanf("%d",&c);

    int arr[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Enter the element:");
            scanf("%d",&arr[i][j]);
        }
    }

    printf("Enter l1 and r1:");
    scanf("%d %d",&l1,&r1);

    printf("Enter l2 and r2:");
    scanf("%d %d",&l2,&r2);

    for (int i = l1; i <= l2; i++)
    {
        for (int j = r1; j <= r2; j++)
        {
            sum = sum + arr[i][j];
        }
    }

    printf("Sum is: %d",sum);

    return 0;
}