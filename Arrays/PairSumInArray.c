#include<stdio.h>
int main(){
    int n,a;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    int arr[n];
    int count = 0;
    for (int i = 0; i < n; i++)
    {
       printf("Enter the element %d :",i+1);
       scanf("%d",&arr[i]);
    }
    printf("Enter the number for finding sum:");
    scanf("%d",&a);
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
       {
            if(arr[i]+arr[j]==a){
                count++;
                printf("(%d,%d)\n",arr[i],arr[j]);
            }
       }
    }       
    printf("%d",count);
    return 0;
}