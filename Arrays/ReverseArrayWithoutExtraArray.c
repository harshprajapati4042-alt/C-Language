#include<stdio.h>
void swap(int arr[],int n){
    int i = 0;
    int j = n-1;
    while(i<j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
}
int main(){
    int n;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the %d element:",i+1);
        scanf("%d",&arr[i]);
    }
    swap(arr,n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}