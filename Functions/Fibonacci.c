#include<stdio.h>
void fibo(int n){
    int a = 1;
    int b = 1;
    int sum = 1;
    if(n==0) return;
    fibo(n-1);
    // if(n==1){
    //     printf("%d ",a);
    //     return;
    // } 
    // if(n==2){
    //     printf("%d ",b);
    //     return;
    // } 
    for (int i = 1; i <= n-2; i++)
    {
        sum = a + b;
        a = b;
        b = sum;
    }
    printf("%d ",sum);
}
int main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    fibo(n);
    return 0;
}