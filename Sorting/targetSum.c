#include<stdio.h>
int main(){
    int n,target;
    printf("Enter the number of element of array");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter the %d element:",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter the target sum:");
    scanf("%d",&target);
    int i = 0;
    int j = n-1;
    while(i<j){
        if(arr[i]+arr[j]==target){
            printf("(%d,%d)",arr[i],arr[j]);
            break;
        }
        else if(arr[i]+arr[j]>=target){
            j--;
        }
        else{
            i++;
        }
    }
    return 0;
}