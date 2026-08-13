#include<stdio.h>
int fact(int a){
    int temp = 1;
    for(int i=2;i<=a;i++){
        temp = temp * i;
    }
    return temp;
}
int main(){
    int n,r,combi;
    printf("Enter the number n:");
    scanf("%d",&n);
    printf("Enter the number r:");
    scanf("%d",&r);
    combi = (fact(n))/(fact(r)*fact(n-r));
    printf("Combination of %d and %d is %d ",n,r,combi);
    return 0;
}