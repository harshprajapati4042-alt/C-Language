#include<stdio.h>
int main(){
    int n,m;

    printf("Enter the number of elements:");
    scanf("%d",&n);

    int arr[n][n];

    printf("\nSprial print:\n");
    int minr = 0;
    int maxr = n-1;
    int minc = 0;
    int maxc = n-1;
    int tne = n*n;
    int count = 1;
    while(count<=tne){
        for(int i=minc;i<=maxc && count<=tne;i++){
            // printf("%d ",arr[minr][i]);
            arr[minr][i] = count;
            count++;
        }
        minr++;
        for(int i=minr;i<=maxr && count<=tne;i++){
            // printf("%d ",arr[i][maxc]);
            arr[i][maxc] = count;
            count++;
        }
        maxc--;
        for(int i=maxc;i>=minc && count<=tne;i--){
            // printf("%d ",arr[maxr][i]);
            arr[maxr][i] = count;
            count++;
        }
        maxr--;
        for(int i=maxr;i>=minr && count<=tne;i--){
            arr[i][minc] = count++;
        }
        minc++;
    }
    for(int i = 0; i < n; i++){
        for(int j=0; j < n; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}