#include <stdio.h>

typedef struct Cricketer {
    char name[30];
    int age;
    int noOfTests;
    float avgRun;
}Cricketer;

int main() {

    Cricketer arr[3];

    for (int i = 0; i < 3; i++) {

        printf("\nEnter Details of Cricketer %d\n", i + 1);

        printf("Enter Name: ");
        scanf(" %[^\n]", arr[i].name);

        printf("Enter Age: ");
        scanf("%d", &arr[i].age);

        printf("Enter Average Run: ");
        scanf("%f", &arr[i].avgRun);

        printf("Enter Number of Tests: ");
        scanf("%d", &arr[i].noOfTests);
    }

    printf("\nCRICKETER DETAILS\n");

    for (int i = 0; i < 3; i++) {

        printf("\nCricketer %d\n", i + 1);

        printf("Name : %s\n", arr[i].name);
        printf("Age : %d\n", arr[i].age);
        printf("Average Test Run : %.f\n", arr[i].avgRun);
        printf("Number of Tests : %d\n", arr[i].noOfTests);
    }

    return 0;
}