#include<stdio.h>
int main(){
    int i,n;
    int sum = 0;
    printf("Enter the no of terms:");
    scanf("%d",&n);
    // for(i=0;i<=n;i++){
    //     if(i%2==0){
    //         sum = sum - i;
    //     }
    //     else{
    //         sum = sum + i;
    //     }
    // }
    if(n%2==0){
        sum = -n/2;
    }
    else{
        sum = -n/2 + n;
    }
    printf("Sum is %d",sum);
    return 0;
}