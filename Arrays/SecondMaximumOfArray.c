#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    int arr[n];
    int smax = INT_MIN;
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        printf("Enter the %d element:",i+1);
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if(max<arr[i]){
            smax = max;
            max = arr[i];
        }
        else if(smax<arr[i] && max!=arr[i]){
            smax = arr[i];
        }
    }
    printf("Maximum Elements is :%d\n",max);
    printf("Second maximum Elements is :%d",smax);
    return 0;
}