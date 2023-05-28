#include "file.h"
void ReadText(char* nameF) { //procedure permettant de lire les textes
    FILE* file = fopen(nameF, "r");
    if (file == NULL) {
        printf("Impossible d'ouvrir le fichier.\n");
        return;
    }
    char chara;
    while ((chara = fgetc(file)) != EOF) {
        printf("%c", chara);
        usleep(10000);

    }
    fclose(file);
}

void Clo_Op(char* nameFI) { //procedure permettant d'ouvrir puis fermer un fichier
    FILE* file = fopen(nameFI, "r");
    if (file == NULL) {
        printf("Impossible d'ouvrir le fichier.\n");
        return;
    }
    char chara;
    while ((chara = fgetc(file)) != EOF) {
        printf("%c", chara);
    }
    fclose(file);

    char enter;
    printf("\nEntrez X quand vous souhaitez fermer le fichier.\n");
    while (1) {
        scanf(" %c", &enter);
        if (enter == 'X' || enter == 'x') {
            system("cls");
            break;
        }
    }
}