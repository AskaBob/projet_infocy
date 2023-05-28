#include "affichage.h"

void TitleScreen() { //affichage de l'ecran titre
    char choice;
    int choiceT = 0;
    printf(" --------------------------------\n");
    printf("| BIENVENUE DANS 'CHAOTIC WORLD' |\n");
    printf(" --------------------------------\n\n");
    while (!choiceT) {
        printf("Voulez-vous :\n");
        printf("A. Commencer une nouvelle aventure.\n");
        printf("B. Reprendre l'aventure.\n");
        printf("C. Acceder a des generalites sur le jeu.\n");
        printf("\n");
        scanf(" %c", &choice);
        system("cls");
        if (choice == 'A' || choice == 'a') {
            printf("Parfait ! Commencons.\n");
            choiceT = 1;
        } else if (choice == 'B' || choice == 'b') {
            int a = Save("save/saving.txt");
            if (a == 0) {
                printf("Aucune sauvegarde disponible.\n");
            } else {
                printf("Nous sommes heureux de vous revoir ! Reprenons.\n");
                choiceT = 1;
            }
        } else if (choice == 'C' || choice == 'c') {
            Clo_Op("indication/info.txt");
        } else {
            printf("Choix invalide. Veuillez recommencer.\n");
        }
    }
}
int ChooseCharacter() { //choix du personnage
    char choice;
    int choiceT = 0;
    printf(" -----------------------------------\n");
    printf("| CHOISISSEZ VOTRE PERSONNAGE        |\n");
    printf(" -----------------------------------\n\n");
    while (!choiceT) {
        printf("Voulez-vous etre :\n");
        printf("A. 'Liam'\n");
        printf("B. 'Jennipher'\n");
        printf("\n");
        scanf(" %c", &choice);
        system("cls");
        if (choice == 'A' || choice == 'a') {
            printf("Vous avez choisi 'Liam'.\n"); //return 2 si on choisit Liam
            choiceT = 1;
            return 2;
        } else if (choice == 'B' || choice == 'b') {
            printf("Vous avez choisi 'Jennipher'.\n"); //return 3 si on choisit Jennipher
            return 3;
            choiceT = 1;
        }
        else {
            printf("Choix invalide. Veuillez recommencer.\n");
        }
    }
}
void pv(int pdv) { //affichage d'une barre de vie
    int dixaine = 10;
    for (int i = 0; i < 10; i++) {
        if (pdv >= dixaine) {
            printf("|X");
            pdv = pdv - 10;
        } else if (pdv >= 1 && pdv <= 9) {
            printf("|.");
            pdv = pdv - 10;
        } else {
            printf("|_");
            pdv = pdv - 10;
        }
    }
    printf("|");
    printf(" %d", 100 + pdv);
    printf("\n");
    printf("\n");
}

