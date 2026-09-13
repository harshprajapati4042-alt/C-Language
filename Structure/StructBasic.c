#include<stdio.h>
int main(){
    struct pokemon{
        int hp;
        int attack;
        int speed;
        char tier;
    } pikachu, charizard;

    pikachu.attack = 60;
    pikachu.hp = 100;
    printf("Enter the speed of pikachu:");
    scanf("%d",&pikachu.speed);
    pikachu.tier = 'A';

    charizard.attack = 100;
    printf("Enter the hp of charizard:");
    scanf("%d",&charizard.hp);
    charizard.speed = 70;
    charizard.tier = 'S';

    struct pokemon bulbasaur;

    bulbasaur.attack = 40;
    bulbasaur.hp = 70;
    bulbasaur.speed = 60;
    printf("Enter the tier of bulbasaur:");
    scanf(" %c",&bulbasaur.tier);

    printf("\nSpeed of pikachu %d\n",pikachu.speed);
    printf("HP of charizard %d\n",charizard.hp);
    printf("Tier of bulbasaur %c",bulbasaur.tier);
    return 0;
}