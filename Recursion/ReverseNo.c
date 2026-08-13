#include<stdio.h>
void reverse(int a){
    if(a==0) return;
    printf("%d\n",a);
    reverse(a-1);
    return;
}
int main(){
    int n;
    printf("Enter the no:");
    scanf("%d",&n);
    reverse(n);
    return 0;
}