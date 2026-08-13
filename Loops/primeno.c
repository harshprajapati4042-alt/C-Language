#include<stdio.h>
int main(){
    int i,n;
    int flag = 0;
    printf("Enter the number you want to check:");
    scanf("%d",&n);
    for(i=2;i<n;i++){
        if(n%i == 0){
            flag = 1;
            break;
        }
    }
    if(n == 1){
        printf("1 is neither prime nor composite.");
    }
    else if(flag == 0){
        printf("Prime number");
    }
    else{
        printf("Not a prime number");
    }
    return 0;
}