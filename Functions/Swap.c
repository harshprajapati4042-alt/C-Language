#include<stdio.h>
int swap(int a, int b){
    // int temp = a;
    // a = b;
    // b = temp;
    a = a + b;
    b = a - b;
    a = a - b;
    printf("%d",a);
    printf("\n%d",b);
}
int main(){
    int a,b;
    printf("Enter the first number :");
    scanf("%d",&a);
    printf("Enter the second number :");
    scanf("%d",&b);
    swap(a,b);
    return 0;
}