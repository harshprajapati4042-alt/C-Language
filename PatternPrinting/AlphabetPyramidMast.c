#include<stdio.h>
int main(){
    int n,i,j,k,m,nsp,nst;
    printf("Enter the no of lines:");
    scanf("%d",&n);
    nst = n;
    nsp = 1;
    for ( i = 1; i <=2*n+1; i++)
    {
        printf("%c",(char)i+64);
    }
    printf("\n");
    for ( i = 1; i <= n; i++)
    {
        int a = 1;
        for ( j = 1; j <= nst; j++)
        {
            printf("%c",(char)a+64);
            a++;
        }
        for ( k = 1; k <= nsp; k++)
        {
            printf(" ");
            a++;
        }
        for ( m = 1; m <= nst; m++)
        {
            printf("%c",(char)a+64);
            a++;
        }
        nsp = nsp + 2;
        nst = nst - 1;
        printf("\n");
    }
    
    return 0;
}