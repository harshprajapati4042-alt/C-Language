#include<stdio.h>
int main(){
    int cp, sp;
    printf("Enter the cost price of product:");
    scanf("%d",&cp);
    printf("Enter the selling price of product:");
    scanf("%d",&sp);
    int p_f = sp - cp;
    if(p_f>0){
        printf("Seller has made an profit of %d",p_f);
    }
    else{
        printf("Seller has loss of %d",p_f*(-1));
    }
    return 0;
}