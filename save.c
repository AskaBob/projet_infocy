#include"save.h"

int Save(char* nameFIL) { //fonction permettant de savoir si une sauvegarde est disponible
    FILE* file = fopen(nameFIL, "r");
    if (file == NULL) {
        printf("Impossible d'ouvrir le fichier.\n"); //return 0 si non
        return 0;
    } else {
        fclose(file);
        printf("Une sauvegarde est disponible.\n"); //return 1 si oui
        return 1;
    }
}

int MakeSave(char* nameFIL, Inventory* inv, int player_life) {
    FILE* file = fopen(nameFIL, "w");
    fprintf(file,"%d %d %d %d %d %d",player_life,inv->potions_health,inv->potions_strength,inv->shield.defense,inv->weapon.critical,inv->weapon.damage);
    fclose(file);
}
