#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    int arr[n];
    int arr1[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the %d element:",i+1);
        scanf("%d",&arr[i]);
        arr1[n-1-i] = arr[i];  
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr1[i]);
    }
    return 0;
}