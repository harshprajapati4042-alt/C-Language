#include<stdio.h>
int main(){
    int i,j,n;
    printf("Enter the no of lines:");
    scanf("%d",&n);
    for ( i = 1; i <= n; i++)
    {
        for ( j = 1; j <= n+1-i; j++)
        {
            printf("%d ",j);
        }
        printf("\n");   
    }
    // int a = n;
    // for ( i = 1; i <= n; i++)
    // {
    //     for ( j = 1; j <= a; j++)
    //     {
    //         printf("%d ",j);
    //     }
    //     printf("\n");  
    //     a--; 
    // }
    return 0;
}