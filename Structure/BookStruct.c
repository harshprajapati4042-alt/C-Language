#include<stdio.h>
#include<string.h>
int main(){
    struct book{
        char name[20];
        int price;
        int pages;
    } a,b,c;

    strcpy(a.name,"Rich Dad Poor Dad");
    a.pages = 200;
    a.price = 500;

    strcpy(b.name,"Atomic Habit");
    b.pages = 250;
    b.price = 400;

    strcpy(c.name,"48 Laws of power");
    c.pages = 300;
    c.price = 250;

    printf("Price of %s is %d",c.name,c.price);
    printf("\nPages of %s is %d",c.name,c.pages);
    return 0;
}