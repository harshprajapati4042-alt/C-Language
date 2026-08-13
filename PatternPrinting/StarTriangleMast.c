#include<stdio.h>
int main(){
    int i,j,n;
    printf("Enter the no of lines:");
    scanf("%d",&n);
    for ( i = 1; i <= n; i++)
    {
        for ( j = 1; j <= n; j++)
        {
            if((i+j)>=n+1){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    // for ( i = 1; i <= n; i++)
    // {
    //     for ( j = 1; j <= n-i; j++)
    //     {
    //         printf(" ");
    //     }
    //     for ( j = 1; j <= i; j++)
    //     {
    //         printf("*");
    //     }
        
    //     printf("\n");   
    // }
    return 0;
}