#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    printf("Enter the no of elements of array:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        int min = INT_MAX;
        int mindx = -1;
        for(int j=i;j<=n-1;j++){
            if(min>arr[j]){
                min = arr[j];
                mindx = j;
            } 
        }
        int temp = arr[mindx];
        arr[mindx] = arr[i];
        arr[i] = temp;
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}