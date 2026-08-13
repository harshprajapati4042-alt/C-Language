#include<stdio.h>
int main(){
    int i,n;
    int ld;
    int rev = 0;
    int n_1;
    printf("Enter the number :");
    scanf("%d",&n);
    n_1 = n;
    while(n!=0){
        ld = n % 10;
        rev = rev * 10 + ld;
        n = n / 10;
    }
    int sum = n_1 + rev;
    printf("%d",rev);
    printf("\n%d",sum);
    return 0;
}