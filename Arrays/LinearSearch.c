#include<stdio.h>
int main(){
    int n,k;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("Enter the elements you want to find:");
    scanf("%d",&k);
    int arr[n];
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        printf("Enter the %d element:",i+1);
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if(k==arr[i]){
            flag = 1;
            break;
        }
    }
    if(flag==0){
        printf("Element not Found.");
    }
    else{
        printf("Element Found.");
    }
    return 0;
}