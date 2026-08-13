#include<stdio.h>
int main(){
    int i,j,n,k,m;
    printf("Enter the number of lines:");
    scanf("%d",&n);
    for ( i = 1; i <= n; i++)
    {
       for ( j = 1; j <= n-i; j++)
       {
            printf(" ");
       }

       for ( k = 1; k <= i; k++)
       {
            printf("%c",(char)k+64);

       }
       int a = i-1;
       for ( m = 1; m <= i-1; m++)
       {
            printf("%c",(char)a+64);
            a --;
    }
       
       printf("\n");
    }
    return 0;
}