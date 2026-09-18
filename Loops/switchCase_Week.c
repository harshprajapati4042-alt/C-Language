#include<stdio.h>
int main(){
    int num;
    printf("Enter the number(1-7) :");
    scanf("%d",&num);
    label : 
    switch(num){
        case 1:
        printf("Monday");
        break;
        case 2:
        printf("Tuseday");
        break;
        case 3:
        printf("Wednesday");
        break;
        case 4:
        printf("Thursday");
        break;
        case 5:
        printf("Friday");
        break;
        case 6:
        printf("Saturday");
        break;
        case 7:
        printf("Sunday");
        break;
        default:
        printf("Enter the Valid Number between 1 to 7 :");
        scanf("%d",&num);
        goto label;
    }
    return 0;
}