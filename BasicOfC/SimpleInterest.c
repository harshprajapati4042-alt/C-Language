#include<stdio.h>
int main(){
    float  p, r, t, si;
    printf("Enter the principle amount: ");
    scanf("%f",&p);
    printf("Enter the rate : ");
    scanf("%f",&r);
    printf("Enter the time(year): ");
    scanf("%f",&t);
    si = (p*r*t)/100;
    printf("The simple interest of principle amount %f with %f rate for %f time(year) is %f", p,r,t,si);
    return 0;
}