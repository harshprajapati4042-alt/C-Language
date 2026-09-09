#include<stdio.h>
int main(){
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

    printf("\nSprial print:\n");
    int minr = 0;
    int maxr = r-1;
    int minc = 0;
    int maxc = c-1;
    int tne = r*c;
    int count = 0;
    while(count<tne){
        for(int i=minc;i<=maxc && count<tne;i++){
            printf("%d ",arr[minr][i]);
            count++;
        }
        minr++;
        for(int i=minr;i<=maxr && count<tne;i++){
            printf("%d ",arr[i][maxc]);
            count++;
        }
        maxc--;
        for(int i=maxc;i>=minc && count<tne;i--){
            printf("%d ",arr[maxr][i]);
            count++;
        }
        maxr--;
       for(int i=maxr;i>=minr && count<tne;i--){
            printf("%d ",arr[i][minc]);
            count++;
        }
        minc++;
    }
    return 0;
}