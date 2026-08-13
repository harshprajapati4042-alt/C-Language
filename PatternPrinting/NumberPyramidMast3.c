#include<stdio.h>
int main(){
    int n,i,j,k,m,nsp,nst;
    printf("Enter the no of lines:");
    scanf("%d",&n);
    nst = n;
    nsp = 1;
    for ( i = 1; i <= n; i++)
    {
        printf("%d",i);
    }
    for ( i = n-1; i >= 1; i--)
    {
        printf("%d",i);
    }
    
    printf("\n");
    for ( i = 1; i <= n; i++)
    {
        for ( j = 1; j <= nst-1; j++)
        {
            printf("%d",j);
        }
        for ( k = 1; k <= nsp; k++)
        {
            printf(" ");
        }
        int b = nst-1;
        for ( m = 1; m <= nst-1; m++)
        {
            printf("%d",b);
            b--;
            
        }
        nst = nst - 1;
        nsp = nsp + 2;
        printf("\n");
    }
    return 0;
} 