#include<stdio.h>
#include<string.h>
int main(){
    char str[20] = "Harsh ";
    char str1[20] = "Prajapati";
    int x = strlen(str);
    printf("%d\n",x);
    // strcpy(str,str1);
    strcat(str,str1);
    printf("%s",str);
    return 0;
}