#include<stdio.h>
int main(){
    int n;
    int product = 1;
    printf("Enter the no of elements in array:");
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the %d element:",i+1);
        scanf("%d",&arr[i]);
        product = product * arr[i];
    }
    printf("Product is %d",product);
    return 0;
}