#include<stdio.h>
int main(){
    int num1,num2;
    char operation;
    printf("Enter the number 1 :");
    scanf("%d",&num1);
    printf("Enter the number 2 :");
    scanf("%d",&num2);
    printf("Enter the operator(+,-,*,%,/) :");
    scanf(" %c",&operation);
    label: 
    switch(operation){
        case '+':
        printf("Addition : %d",num1+num2);
        break;
        case '-':
        printf("Subtraction : %d",num1-num2);
        break;
        case '/':
        printf("Division : %d",num1/num2);
        break;
        case '*':
        printf("Multiplication : %d",num1*num2);
        break;
        case '%':
        printf("Modulo : %d",num1%num2);
        break;
        default:
        printf("Enter the Valid Operator(+,-,/,*,%) :");
        scanf(" %c",&operation);
        goto label;
    }
    return 0;
}