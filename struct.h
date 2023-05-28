#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>


#define MAX_POTIONS_HEALTH 3
#define MAX_POTIONS_STRENGTH 2
#define TAILLE 20

typedef struct { //structure pour les monstres
    char name[TAILLE];
    int life;
    int damage;
} Monster;

typedef struct { //structure pour les armes
    char name[TAILLE];
    int damage;
    float critical;
} Weapon;

typedef struct { //structure pour les boucliers
    char name[TAILLE];
    int defense;
} Shield;

typedef struct { //structure pour l'inventaire
    Weapon weapon;
    Shield shield;
    int potions_health;
    int potions_strength;
} Inventory;
