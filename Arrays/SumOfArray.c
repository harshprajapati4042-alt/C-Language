#include<stdio.h>
int main(){
    int n;
    int sum = 0;
    printf("Enter the no of elements in array:");
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the %d element:",i+1);
        scanf("%d",&arr[i]);
        sum = sum + arr[i];
    }
    printf("Sum is %d",sum);
    return 0;
}