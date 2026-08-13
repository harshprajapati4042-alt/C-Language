#include<stdio.h>
int min(int a,int b){
    if(a>b) return b;
    else return a;
}
int gcd(int a, int b){
    for (int i = min(a,b); i >= 1; i--)
    {
        if(a%i==0 && b%i==0){
            return i;
        }
    }
    
}
int main(){
    int a,b;
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);
    int hcf = gcd(a,b);
    printf("HCF of %d and %d is %d",a,b,hcf);
    return 0;
}