#include<stdio.h>
#include<stdbool.h>
int main(){
    int n;
    printf("Enter the no of elements of array:");
    scanf("%d",&n);
    int arr[n];
    int ans[n];
    int idx = 0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    // for(int i=0;i<n;i++){
    //     if(arr[i]!=0){
    //         ans[idx] = arr[i];
    //         idx++;
    //     }
    // }
    // while(idx!=n){
    //     ans[idx] = 0;
    //     idx++;
    // }
    for(int i=0;i<n-1;i++){
        bool flag = true;
        for(int j=0;j<n-1-i;j++){
            if(arr[j]==0){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                flag = false;
            }
        }
        if(flag==true) break;
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}