#include<stdio.h>
// #include<limits.h>
int main(){
    int n;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    int arr[n];
    // int max = -1;
    // int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        printf("Enter the %d element:",i+1);
        scanf("%d",&arr[i]);
    }
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if(max<arr[i]){
            max = arr[i];
        }
    }
    
    printf("Maximum Elements is :%d",max);
    return 0;
}