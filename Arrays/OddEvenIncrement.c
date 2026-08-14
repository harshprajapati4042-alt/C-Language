#include<stdio.h>
int main(){
    int n;
    printf("Enter the no of elements in array:");
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the %d element:",i+1);
        scanf("%d",&arr[i]);
        if(i%2==0){
            arr[i] = arr[i] + 10;
        }
        else{
            arr[i] = arr[i] * 2;
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}