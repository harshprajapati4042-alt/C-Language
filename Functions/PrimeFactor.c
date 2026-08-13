#include<stdio.h>
void prime(int a){
    for (int i = 2; i <= a; i++)
    {
       if(a%i==0){
        printf("%d",i);
       }
    }
    return;
}
int main(){
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    prime(n);
    return 0;
}