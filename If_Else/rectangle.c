#include<stdio.h>
int main(){
    float length, breadth, area, perimeter;
    printf("Enter the length of rectangle:");
    scanf("%f",&length);
    printf("Enter the breadth of rectangle:");
    scanf("%f",&breadth);
    area = length * breadth;
    perimeter = (2*(length+breadth));
    printf("Area of recatngle is :%f", area);
    printf("\nPerimeter of reactangle :%f", perimeter);
    if(area>perimeter){
        printf("\nArea %f is greater than %f perimeter.", area,perimeter);
    }
    else{
        printf("\nArea %f is less than %f perimeter.", area,perimeter);
    }
    return 0;
}