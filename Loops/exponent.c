#include<stdio.h>
int main(){
    int a,b,i,result=1;
    printf("Enter the number:");
    scanf("%d",&a);
    printf("Enter the power:");
    scanf("%d",&b);
    while(b!=0){
        result = result * a;
        b--;
    }
    printf("%d",result);
    return 0;
}