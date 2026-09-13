#include<stdio.h>
#include<string.h>
int main(){
    struct Person{
        char name[20];
        int salary;
        int age;
    };

    struct Person Emp1;
    struct Person Emp2;

    strcpy(Emp1.name,"Harsh");
    Emp1.age = 19;
    Emp1.salary = 100000;
    
    strcpy(Emp2.name,"Milan");
    Emp2.age = 20;
    Emp2.salary = 100000;

    printf("Name of Emp1 is %s",Emp1.name);
    printf("\nAge of Emp2 is %d",Emp2.age);
    return 0;
}