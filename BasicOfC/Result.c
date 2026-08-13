#include<stdio.h>
int main(){
    float s1, s2, s3, s4, s5, result;
    printf("Give mark of all subject out of 100!");
    printf("\nEnter the value of subject 1:");
    scanf("%f",&s1);
    printf("\nEnter the value of subject 2:");
    scanf("%f",&s2);
    printf("\nEnter the value of subject 3:");
    scanf("%f",&s3);
    printf("\nEnter the value of subject 4:");
    scanf("%f",&s4);
    printf("\nEnter the value of subject 5:");
    scanf("%f",&s5);
    result = ((s1+s2+s3+s4+s5)/5);
    printf("\nResult of student is : %f", result);
    return 0;
}