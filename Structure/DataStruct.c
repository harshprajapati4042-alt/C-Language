#include<stdio.h>
#include<stdbool.h>
int main(){
    typedef struct date{
        int day;
        int month;
        int year;
    }date;

    date a,b,c;
    
    a.day = 9;
    a.month = 12;
    a.year = 2006;

    b.day = 8;
    b.month = 9;
    b.year = 2010;
    
    c.day = 9;
    c.month = 12;
    c.year = 2006;

    bool flag = true;
    if(a.day!=b.day) flag = false;
    if(a.month!=b.month) flag = false;
    if(a.year!=b.year) flag = false;

    if(flag==true) printf("Date a and b is equal\n");
    else printf("Date a and b is not equal\n");

    bool flag1 = true;
    if(a.day!=c.day) flag1 = false;
    if(a.month!=c.month) flag1 = false;
    if(a.year!=c.year) flag1 = false;

    if(flag1==true) printf("Date a and c is equal");
    else printf("Date a and c is not equal");

    return 0;
}