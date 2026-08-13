#include<stdio.h>
int main(){
    int i,N,a,j;
    int flag = 0;
    printf("Enter the no of elements:");
    scanf("%d",&N);
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            printf("Enter the elements:");
            scanf("%d",&a);
            if(j<i && a!=0){
                flag = 1;
                break;
            }
        }
    }
    if(flag == 0){
        printf("1");
    }
    else{
        printf("0");
    }
    return 0;
}