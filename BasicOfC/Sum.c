#include<stdio.h>

void main(){
    float a,b;
    printf("Enter the value of a: ");
    scanf("%f",&a);
    printf("Enter the value of b: ");
    scanf("%f",&b);
    float sum = a+b;
    printf("The sum of two variable a=%f and b=%f is %f",a,b,sum);
    printf("\nThe Subtraction of two variable a=%f and b=%f is %f",a,b,a-b);
    printf("\nThe Multiplication of two variable a=%f and b=%f is %f",a,b,a*b);
    printf("\nThe Divison of two variable a=%f and b=%f is %f",a,b,a/b);
    // printf("\nThe Modulo of two variable a=%f and b=%f is %f",a,b,a%b);
}