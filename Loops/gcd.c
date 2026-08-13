#include<stdio.h>
int main(){
    int a, b, t;
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Entre the second number:");
    scanf("%d",&b);
    if(a<b){
        t = a;
        a = b;
        b = a;
    }
    printf("GCD of %d and %d is ",a,b);
    while(b!=0){
        t = a;
        a = b;
        b = t % a;
    }
    printf("%d",a);
    return 0;
}