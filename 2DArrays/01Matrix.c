#include<stdio.h>
int main(){
    int r,c;
    printf("Enter the no of rows:");
    scanf("%d",&r);
    printf("Enter the no of columns:");
    scanf("%d",&c);
    int maxcount = 0;
    int row_no = 0;
    int arr[r][c];
    for (int i = 0; i < r; i++)
    {
        int count = 0;
        for (int j = 0; j < c; j++)
        {
            printf("Enter the element :");
            scanf("%d",&arr[i][j]);
            if(arr[i][j]==1){
                count ++;
            }
        }
        if(count > maxcount){
            maxcount = count;
            row_no = i;
        }
    }
    printf("%d row has the maximum no of 1 : %d",row_no,maxcount);
    return 0;
}