#include<stdio.h>
int main(){
    int a, b, r, q;
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);
    // q = a/b;
    // printf("Value of qutiont is :%d" , q);
    // r = (a-(b*q));
    r = a % b;
    printf("\nRemainder of a=%d and b=%d is %d", a,b,r);
    return 0;
}