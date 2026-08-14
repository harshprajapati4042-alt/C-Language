#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    int arr[n];
    // int max = -1;
    int min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        printf("Enter the %d element:",i+1);
        scanf("%d",&arr[i]);
    }
    // int min = arr[0];
    for (int i = 0; i < n; i++)
    {
        if(min>arr[i]){
            min = arr[i];
        }
    }
    
    printf("Maximum Elements is :%d",min);
    return 0;
}