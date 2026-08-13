#include<stdio.h>
void toh(int n, char s, char h, char d){
    if(n==0) return;
    toh(n-1,s,d,h);
    printf("%c to %c\n",s,d);
    toh(n-1,h,s,d);
    return;
}
int main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    toh(n,'a','b','c');
    return 0;
}