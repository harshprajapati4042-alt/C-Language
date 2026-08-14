#include<stdio.h>
int main(){
    int a[10] = {45,65,75,25,35,65,54,24,19,80};
    for (int i = 0; i <= 9; i++)
    {
        if(a[i]<35){
            printf("%d ",i); 
        }
    }
    return 0;
}