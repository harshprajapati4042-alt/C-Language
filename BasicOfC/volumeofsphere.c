#include<stdio.h>
#define pi 3.14
int main(){
    float r;
    printf("Enter the radius:");
    scanf("%f",&r);
    float area = ((pi*r*r*r*4)/3);
    printf("Area of Sphere : %f" , area);
    return 0;
}