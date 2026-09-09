#include<stdio.h>
#include<limits.h>
int main(){
    int r,c;
    int max = INT_MIN;
    int min = INT_MAX;
    printf("Enter the no of rows:");
    scanf("%d",&r);
    printf("Enter the no of columns:");
    scanf("%d",&c);
    int arr[r][c];
    int maxRow, maxCol, minRow, minCol;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Enter the element of 1st matrix:");
            scanf("%d",&arr[i][j]);
            if(max<arr[i][j]){
                max = arr[i][j];
                maxRow = i;
                maxCol = j;
            }
            if(min>arr[i][j]){
                min = arr[i][j];
                minRow = i;
                minCol = j;
            }
        }
    }
    printf("%d at (%d,%d)\n",max,maxRow,maxCol);
    printf("%d at (%d,%d)",min,minRow,minCol);
    return 0;
}