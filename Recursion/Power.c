#include<stdio.h>
int Pow(int a, int b){
    if(b==1) return a;
    int ans = a * Pow(a,b-1);
    return ans;
}
int main(){
    int a,b;
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);
    int ans = Pow(a,b);
    printf("%d",ans);
    return 0;
}