#include<stdio.h>
int main(){
    int i,j,a,n;
    int trace = 0;
    printf("Enter the no of elements:");
    scanf("%d",&n);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Enter the element:");
            scanf("%d",&a);
            if(i==j){
                trace = trace + a;
            }
        }
        
    }
    printf("Sum of diagonal element is %d",trace);
    return 0;
}
