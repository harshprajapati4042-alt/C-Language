#include<stdio.h>
int main(){
    int arr[10] = {1,2,3,3,5,6,7,4,8,9};
    // int flag = 0;
    // int de = 0;
    // for(int i=0; i<6; i++){
    //     for(int j=i+1; j<6; j++){
    //         if(arr[i]==arr[j]){
                // flag = 1;
                // de = arr[i];
        //         printf("%d is duplicate element",arr[i]);
        //         break;
        //     }
        // }
        // if(flag==1){
        //         break;
        // }
    // }
    // if(flag==0) printf("No duplicate element.");
    // else printf("%d is Duplicate element",de);

    // int brr[10] ={};
    // for(int i=0;i<10;i++){
    //     if(brr[arr[i]]==1){
    //         printf("%d is duplicate element.",arr[i]);
    //         break;
    //     }
    //     else{
    //         brr[arr[i]] = 1;
    //     }
    // }

    int sum = 0;
    for(int i=0;i<10;i++){
        sum = sum + arr[i];
    }
    printf("%d is duplicate element.",(sum-(9)*(9+1)/2));
    return 0;
}