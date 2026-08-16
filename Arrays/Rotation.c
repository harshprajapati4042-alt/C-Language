#include<stdio.h>
void swap(int arr[],int n,int k){
    int i = 0;
    int j = n-1;
    while(k>0){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
        k--;
    }
}
int main(){
    int n,k;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("Enter the number of elements to rotate:");
    scanf("%d",&k);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the %d element:",i+1);
        scanf("%d",&arr[i]);
    }
    swap(arr,n,k);
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}