#include<stdio.h>
int fibo(int n){
    if(n==1 || n==2) return 1;
    int temp = fibo(n-1) + fibo(n-2);
    return temp;
}
int main(){
    int a;
    printf("Enter the number:");
    scanf("%d",&a);
    printf("%d",fibo(a));
    return 0;
}