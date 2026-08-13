#include<stdio.h>
int main(){
    int i,j,n;
    printf("Enter the no of lines:");
    scanf("%d",&n);
    // for ( i = 1; i <= n; i++)
    // {
    //     for ( j = n; j >= i; j--)
    //     {
    //         printf("* ");
    //     }
    //     printf("\n");   
    // }
    // for ( i = 1; i <= n; i++)
    // {
    //     for ( j = 1; j <= n+1-i; j++)
    //     {
    //         printf("* ");
    //     }
    //     printf("\n");   
    // }
    int a = n;
    for ( i = 1; i <= n; i++)
    {
        for ( j = 1; j <= a; j++)
        {
            printf("* ");
        }
        printf("\n");  
        a--; 
    }
    return 0;
}