#include<stdio.h>
void swap(int arr[],int n){
    int i = 0;
    int j = n-1;
    int flag = 1;
    while(i<j){
        if(arr[i] != arr[j]){
            flag = 0;
            break;
        }
        i++;
        j--;
    }
    if(flag==1){
        printf("Palidrome");
    }
    else{
        printf("Not Palidrome");
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
    return 0;
}