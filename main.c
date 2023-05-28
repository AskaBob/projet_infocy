#include "struct.h"
#include "affichage.h"
#include "choice.h"
#include "fight.h"
#include "file.h"
#include "init.h"
#include "save.h"

int main() {
    Inventory inventory;
    Monster monster;
    srand(time(NULL));
    TitleScreen();
    if(ChooseCharacter() == 2){
        char nameFI[] = "chara/swordw.txt";
    }
    else{
        char nameFI[] = "chara/staffw.txt";
    }

    InitCharacter(nameFI, &inventory);
    InitMonster(nameFIM, &monster);
    
    ReadText("description/welcome.txt");
    ReadText("choice/choice1.txt");
    if(MakeChoice() == 0){
        ReadText("description/peacefullife.txt");
        printf("FIN 'Vie paisible'");
    }
    else if(MakeChoice() == 1){
        ReadText("description/begintrip.txt");
        Fight(&monster, &inventory);
    }
    

    printf("Nom du monstre : %s\n", monster.name);
    printf("Points de vie du monstre : %d\n", monster.life);
    printf("Degats du monstre : %d\n", monster.damage);
    printf("\n");

    Fight(&monster, &inventory);

    return 0;
}
