#include<stdio.h>
int main(){
    int n;
    printf("Enter the no of elements in array:");
    scanf("%d",&n);
    int arr[n];
    int sumeven = 0;
    int sumodd = 0;
    for (int i = 0; i < n; i++)
    {
        printf("Enter the %d element:",i+1);
        scanf("%d",&arr[i]);
        if(i%2==0){
            sumeven = sumeven + arr[i];
        }
        else{
            sumodd = sumodd + arr[i];
        }
    }
    int result = sumeven - sumodd;
    printf("%d",result);
    return 0;
}