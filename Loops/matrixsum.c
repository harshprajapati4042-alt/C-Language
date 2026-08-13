#include<stdio.h>
int main(){
    int m,n,a;
    int rowindex = 0;
    int colindex, rowsum;
    int sqsum = 0;
    printf("Enter the no of rows:");
    scanf("%d",&m);
    printf("Enter the no of columns:");
    scanf("%d",&n);
    while(rowindex < m){
        rowsum = 0;
        colindex = 0;
        while(colindex < n){
            printf("Enter the number:");
            scanf("%d",&a);
            rowsum = rowsum + a;
            colindex ++;
        }
        sqsum = sqsum + (rowsum * rowsum);
        rowindex ++;
    }
    printf("Sum is %d",sqsum);
    return 0;
}