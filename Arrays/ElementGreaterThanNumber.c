#include<stdio.h>
int main(){
    int n,a;
    printf("Enter the no of elements in array:");
    scanf("%d",&n);
    printf("Enter the no :");
    scanf("%d",&a);
    int arr[n];
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        printf("Enter the %d element:",i+1);
        scanf("%d",&arr[i]);
        if(arr[i]>a){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}