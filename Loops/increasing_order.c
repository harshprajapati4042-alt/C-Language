#include<stdio.h>
int main(){
    int a,b;
    int count = 0;
    int maxcount = 0;
    printf("Enter the number:");
    scanf("%d",&a);
    // if(a!=-1){
    //     count = 1;
    //     maxcount = 1;
    //     printf("Enter the next number:");
    //     scanf("%d",&b);
    //     while(b!=-1){
    //         if(a<b){
    //             count ++;
    //         }
    //         else{
    //             if(maxcount<count){
    //                 maxcount = count;
    //             }
    //             count = 1;
    //         }
    //         a = b;
    //         scanf("%d",&b);
    //     }
    //     if(maxcount<count){
    //         maxcount = count;
    //     }
    // }
    // printf("Count is %d",maxcount);
    if(a!=-1){
        count = 1;
        maxcount = 1;
        do{
            printf("Enter the next number:");
            scanf("%d",&b);
            if(a<b){
             count ++;
            }
            else{
                if(maxcount<count){
                 maxcount = count;
                }
            count = 1;
            }
            a = b;
        }
        while(b!=-1);
        if(maxcount<count){
            maxcount = count;
        }
    }
    printf("Count is %d",maxcount);
    return 0;
}