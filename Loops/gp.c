#include<stdio.h>
int main(){
    int i,n;
    printf("Enter the no of terms:");
    scanf("%d",&n);
    float a = 100;
    for(i=0;i<n;i++){
        printf("%f ",a);
        a = a / 2;
    }
    return 0;
}