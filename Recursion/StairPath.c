#include<stdio.h>
int stair(int n){
    if(n<=2) return n;
    if(n==3) return 4;
    int tways = stair(n-1) + stair(n-2) + stair(n-3);
    return tways;
}
int main(){
    int a;
    printf("Enter the number:");
    scanf("%d",&a);
    printf("%d",stair(a));
    return 0;
}