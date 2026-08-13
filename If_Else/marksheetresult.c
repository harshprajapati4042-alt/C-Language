#include<stdio.h>
int main(){
    int m1,m2,m3,m4,m5,result;
    printf("Enter the mark of subject 1:");
    scanf("%d",&m1);
    printf("Enter the mark of subject 2:");
    scanf("%d",&m2);
    printf("Enter the mark of subject 3:");
    scanf("%d",&m3);
    printf("Enter the mark of subject 4:");
    scanf("%d",&m4);
    printf("Enter the mark of subject 5:");
    scanf("%d",&m5);
    result = ((m1+m2+m3+m4+m5)/5);
    printf("Result of student is %d \n",result);
    if(result>=91 && result<=100){
        printf("Student is pass with A1 grade.");
    }
    else if(result>=81 && result<=90){
        printf("Student is pass with A2 grade.");
    }
    else if(result>=71 && result<=80){
        printf("Student is pass with B1 grade.");
    }
    else if(result>=61 && result<=70){
        printf("Student is pass with B2 grade.");
    }
    else if(result>=51 && result<=60){
        printf("Student is pass with C1 grade.");
    }
    else if(result>=41 && result<=50){
        printf("Student is pass with c2 grade.");
    }
    else{
        printf("Student is fail.");
    }
    return 0;
}