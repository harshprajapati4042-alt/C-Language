#include<stdio.h>
#include<string.h>
int main(){
    char str[40];
    puts("Enter the string:");
    // scanf("%[^\n]s",str);
    gets(str);
    puts("The size of srting:");
    int size = 0;
    int i = 0;
    while(str[i]!='\0'){
        size ++;
        i++;
    }
    printf("Size is %d",size);
    return 0;
}