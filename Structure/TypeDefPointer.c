#include<stdio.h>
typedef int* int_pointer;
int main(){
    int_pointer x,y;
    int a = 3;
    int b = 4;
    x = &a;
    y = &b;
    printf("%p\n",x);
    printf("%p",y);
    
    return 0;
}