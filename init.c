#include "init.h"

void InitCharacter(char* nameFIC, Inventory* inventory) { //initialisation de l'inventaire
    FILE* file = fopen(nameFIC, "r");
    if (file == NULL) {
        printf("Impossible d'ouvrir le fichier.\n");
        return;
    }
    fscanf(file, "%s %d %d", &inventory->weapon.name, &inventory->weapon.damage, &inventory->shield.defense);
    fclose(file);
    inventory->potions_health = MAX_POTIONS_HEALTH;
    inventory->potions_strength = MAX_POTIONS_STRENGTH;
}

void InitMonster(char* nameFIM, Monster* monster) { //initialisation des ennemies
    FILE* file = fopen(nameFIM, "r");
    if (file == NULL) {
        printf("Impossible d'ouvrir le fichier.\n");
        return;
    }
    fscanf(file, "%s %d %d", &monster->name, &monster->life, &monster->damage);
    fclose(file);
}
