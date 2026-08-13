#include<stdio.h>
int main(){
    int i,n;
    int count = 0;
    int ld;
    int sum = 0;
    printf("Enter the number:");
    scanf("%d",&n);
    while(n!=0){
        ld = n % 10;
        if(ld%2==0){
            sum = sum + ld;
        }
        n = n / 10;
        count ++;
    }
    printf("Count is %d",count);
    printf("Sum is %d",sum);
    return 0;
}