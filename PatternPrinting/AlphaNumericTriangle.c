#include<stdio.h>
int main(){
    int i,j,n;
    printf("Enter the no of lines:");
    scanf("%d",&n);
    for ( i = 1; i <= n; i++)
    {
        for ( j = 1; j <= i; j++)
        {
            if(i%2!=0){
                printf("%d ",j);
            }
            else{
                printf("%c ",(char)(64+j));
            }
        }
        printf("\n");
    }
    
    return 0;
}