#include<stdio.h>
int main(){
    int r,c;
    printf("Enter the no of rows:");
    scanf("%d",&r);
    printf("Enter the no of columns:");
    scanf("%d",&c);
    int arr1[r][c];
    int arr2[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Enter the element of 1st matrix:");
            scanf("%d",&arr1[i][j]);
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Enter the element of 2nd matrix:");
            scanf("%d",&arr2[i][j]);
        }
    }
    printf("Sum is :\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ",(arr1[i][j]+arr2[i][j]));
        }
        printf("\n");
    }
    return 0;
}