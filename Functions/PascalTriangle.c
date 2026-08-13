#include<stdio.h>
// int fact(int a){
//     int temp = 1;
//     for(int i=2;i<=a;i++){
//         temp = temp * i;
//     }
//     return temp;
// }
int main(){
    int n,r,combi;
    printf("Enter the number n:");
    scanf("%d",&n);
    // int a = n;
    // for (int i = 0; i <= n; i++)
    // {
    //     for (int k = 0; k < a; k++)
    //     {
    //         printf(" ");
    //     }
    //      a--;
        
    //     for (int j = 0; j <= i; j++)
    //     {
    //        combi = (fact(i))/(fact(j)*fact(i-j));
    //         printf("%d ",combi);
    //     }
    //     printf("\n");
    // }
    int a = n;
    for (int i = 0; i <= n; i++)
    {
        int first = 1;
        for (int k = 0; k < a; k++)
        {
            printf(" ");
        }
         a--;
        
        for (int j = 0; j <= i; j++)
        {
            printf("%d ",first);
           first = first * (i-j)/(j+1);
           
        }
        printf("\n");
    }
    return 0;
}