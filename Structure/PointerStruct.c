#include<stdio.h>
#include<string.h>
typedef struct pokemon{
    int hp;
    int attack;
    int speed;
    char tier;
}pokemon;

void evolve(pokemon* p){
    // (*p).attack = 150;
    p->attack = 150;
    p->hp = 250;
    p->speed = 100;
    p->tier = 'S';
}

int main(){
    pokemon pikachu = {100,200,70,'A'};

    // pikachu.attack = 100;
    // pikachu.hp = 200;
    // pikachu.speed = 70;
    // pikachu.tier = 'A';

    printf("%d\n",pikachu.attack);
    printf("%d\n",pikachu.hp);
    printf("%d\n",pikachu.speed);
    printf("%c\n",pikachu.tier);

    evolve(&pikachu);
    
    printf("%d\n",pikachu.attack);
    printf("%d\n",pikachu.hp);
    printf("%d\n",pikachu.speed);
    printf("%c\n",pikachu.tier);
    return 0;
}
