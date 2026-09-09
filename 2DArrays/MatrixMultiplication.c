#include<stdio.h>
int main(){
    int r,c,r1,c1;
    printf("Enter the no of rows of 1 matrix:");
    scanf("%d",&r);
    printf("Enter the no of columns of 1 matrix:");
    scanf("%d",&c);
    printf("Enter the no of rows of 2 matrix:");
    scanf("%d",&r1);
    printf("Enter the no of columns of 2 matrix:");
    scanf("%d",&c1);
    int arr1[r][c];
    int arr2[r][c];
    printf("Enter the element of 1st matrix:");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }
     printf("Enter the element of 2nd matrix:");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d",&arr2[i][j]);
        }
    }
    int mult[r][c1];
    if(c!=r1){
        printf("Matrix multiplication is not possible");
    }
    else{
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c1; j++)
            {
                mult[i][j] = 0;
                for (int k = 0; k < c; k++)
                {
                   mult[i][j] = mult[i][j] + arr1[i][k] * arr2[k][j];
                }
                
            }
            
        }
        
    } 
    printf("Multiplication is :\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            printf("%d ",mult[i][j]);
        }
        printf("\n");
    }
    return 0;
}