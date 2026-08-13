#include<stdio.h>
# define pie  3.14

void main(){
    float radius;
    printf("Enter the value of Radius :");
    scanf("%f",&radius);
    float Area = radius * radius * pie;
    printf("The Area of circle of radius %f is %f",radius,Area);
}