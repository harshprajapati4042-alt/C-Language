#include<stdio.h>
int Powlog(int a, int b){
    if(b==0) return 1;
    int x = Powlog(a,b/2);
    if(b%2==0){
        return x*x;
    }
    else{
        return x*x*a;
    }
    
}
int main(){
    int a,b;
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);
    int ans = Powlog(a,b);
    printf("%d",ans);
    return 0;
}