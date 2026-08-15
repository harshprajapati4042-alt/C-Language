#include<stdio.h>
void fact(int n){
    if(n==0) return;
    fact(n-1);
    int temp = 1;
    for (int i = 1; i <= n; i++)
    {
       temp = temp * i;
    }
    printf("Factorial of %d is %d\n",n,temp);
}
int main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    fact(n);
    return 0;
}