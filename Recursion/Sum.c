#include<stdio.h>
int sum(int n){
    if(n==0 || n==1) return n;
    int ans = n + sum(n-1);
    return ans;
    // if(n==0){
    //     printf("%d",s);
    //     return;
    // }
    // sum(n-1,n+s);
    // return;
}
int main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    // sum(n,0);
    int ans = sum(n);
    printf("%d",ans);
    return 0;
}