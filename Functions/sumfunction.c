#include<stdio.h>
int sum(int a, int b){
    return a+b;
}
int main(){
    int a,b,result;
    printf("Enter the number 1:");
    scanf("%d",&a);
    printf("Enter the number 2:");
    scanf("%d",&b);
    result = sum(a,b);
    printf("%d",result);
    return 0;
}