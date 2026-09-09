#include<stdio.h>
#include<limits.h>
int main(){
    int r,c;
    printf("Enter the no of rows:");
    scanf("%d",&r);
    printf("Enter the no of columns:");
    scanf("%d",&c);
    int maxsum = INT_MIN;
    int row_no = 0;
    int arr[r][c];
    for (int i = 0; i < r; i++)
    {
        int sum = 0;
        for (int j = 0; j < c; j++)
        {
            printf("Enter the element :");
            scanf("%d",&arr[i][j]);
            sum = sum + arr[i][j];
        }
        if(sum > maxsum){
            maxsum = sum;
            row_no = i;
        }
    }
    printf("%d row has the maximum sum : %d",row_no,maxsum);
    return 0;
}