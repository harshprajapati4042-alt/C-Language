#include<stdio.h>
int main(){
    int N,i,a;
    printf("Enter the numbers of element:");
    scanf("%d",&N);
    int count=0;
    int maxcount = 0;
    for(i=0;i<N;i++){
        printf("Enter the next numbers:");
        scanf("%d",&a);
        if(a%2==0){
            count ++;
        }
        else{
            if(maxcount < count){
                maxcount = count;
            }
            count = 0;
        }
    }
    if(maxcount < count){
        maxcount = count;
    }
    printf("%d",maxcount);
    return 0;
}