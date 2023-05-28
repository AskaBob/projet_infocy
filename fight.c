#include "fight.h"
void Fight(Monster* monster, Inventory* inventory) { //fonction combat
    int swit=0;
    int player_life = 100;
    int monster_life = monster->life;
    int player_attack = 0;
    int monster_attack = 0;
    char choice;
    while (player_life > 0 && monster_life > 0) {
        if(swit == 0){
            player_attack = rand() % inventory->weapon.damage + 1;
        }
        else{
            swit=0;
        }
        pv(player_life);
        printf("Vie du monstre : %d\n", monster_life);
        printf("Que voulez-vous faire :\n");
        printf("A. Attaquer (%d)\n",player_attack);
        printf("B. Utiliser une potion de soin (%d restantes)\n", inventory->potions_health);
        printf("C. Utiliser une potion de force (%d restantes)\n", inventory->potions_strength);
        printf("\n");
        scanf(" %c", &choice);
        system("cls");
        switch (choice) {
            case 'A':
            case 'a':
                monster_attack = rand() % monster->damage + 1;
                monster_life -= player_attack;
                player_life -= monster_attack;
                printf("Vous attaquez le monstre et lui infligez %d points de degats.\n", player_attack);
                printf("Le monstre vous attaque et vous inflige %d points de degats.\n", monster_attack);
                break;
            case 'B':
            case 'b':
                if (inventory->potions_health > 0) {
                    player_life += 10;
                    if (player_life > 100) {
                        player_life = 100;
                    }
                    inventory->potions_health--;
                    printf("Vous utilisez une potion de soin et regagnez 10 points de vie.\n");
                    pv(player_life);
                } else {
                    printf("Vous n'avez plus de potions de soin.\n");
                }
                break;
            case 'C':
            case 'c':
                if (inventory->potions_strength > 0) {
                    player_attack += 10;
                    swit = 1;
                    inventory->potions_strength--;
                    printf("Vous utilisez une potion de force et votre arme gagne 10 points de degats.\n");
                } else {
                    printf("Vous n'avez plus de potions de force.\n");
                }
                break;
            default:
                printf("Choix invalide. Veuillez recommencer.\n");
        }
        sleep(2);
        system("cls");
    }
    if (player_life <= 0) {
        pv(player_life);
        printf("Vous avez perdu ! Le monstre vous a vaincu.\n");
    } else {
        printf("Vous avez gagne ! Vous avez vaincu le monstre.\n");
    }
}
