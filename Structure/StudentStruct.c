#include<stdio.h>
#include<string.h>
#include<stdbool.h>
typedef struct student{
    int rno;
    char name[20];
    char dept[20];
    char course[20];
    int yearOfJoining;
} student;

void check(student s1, student s2){
    bool flag = true;
    char s01[20],s02[20];
    strcpy(s01,s1.dept);
    strcpy(s02,s2.dept);
    for(int i=0;i<strlen(s01)||i<strlen(s02);i++){
        if(s01[i]!=s02[i]){
            flag = false;
            break;
        }
    }
    if(flag == true){
        printf("Same Department");
    }
    else{
        printf("Different Department");
    }
    return;
}

int main(){
    student s1,s2;

    s1.rno = 105;
    strcpy(s1.name,"Harsh");
    strcpy(s1.dept,"CSE");
    strcpy(s1.course,"BE");
    s1.yearOfJoining = 2024;

    s2.rno = 104;
    strcpy(s2.name,"Akshar");
    strcpy(s2.dept,"CSE");
    strcpy(s2.course,"BE");
    s2.yearOfJoining = 2024;

    check(s1,s2);
    return 0;
}