#include "choice.h"
int MakeChoice(){ //fonction permettant de saisir les choix
    char ho;
    int ch = 0;
    while(!ch){
        scanf("%c", &ho);
        if(ho == 'A' || ho == 'a'){ //return 1 pour le choix A
            return 1;
            ch++;
        }
        else if(ho == 'B' || ho == 'b'){ //return 0 pour le choix B
            return 0;
            ch++;
        }
        else{
            printf("Erreur, veuillez recommencer.\n");
        }
    }
}