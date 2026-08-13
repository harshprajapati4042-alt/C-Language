#include<stdio.h>
int main(){
    int i,j,n,k;
    printf("Enter the number of lines:");
    scanf("%d",&n);
    // for ( i = 1; i <= n; i++)
    // {
    //    for ( j = 1; j <= n-i; j++)
    //    {
    //         printf(" ");
    //    }
    //    for ( k = 1; k <= 2*i-1; k++)
    //    {
    //         printf("*");
    //    }
    //    printf("\n");
    // }
    int nst = 1;
    int nsp = n-1;
    for ( i = 1; i <= n; i++)
    {
       for ( j = 1; j <= nsp; j++)
       {
            printf(" ");
       }

       for ( k = 1; k <= nst; k++)
       {
            printf("*");
       }
       nst = nst + 2;
       nsp = nsp - 1;
       printf("\n");
    }
    return 0;
}