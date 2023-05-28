#include "struct.h"
#include "affichage.h"
#include "choice.h"
#include "fight.h"
#include "file.h"
#include "init.h"
#include "save.h"

int main() {
    srand(time(NULL));
    TitleScreen();
    ChooseCharacter();

    char nameFI[] = "chara/swordf.txt";
    char nameFIM[] = "chara/slime.txt";
    Inventory inventory;
    Monster monster;

    InitCharacter(nameFI, &inventory);
    InitMonster(nameFIM, &monster);

    printf("Nom du monstre : %s\n", monster.name);
    printf("Points de vie du monstre : %d\n", monster.life);
    printf("Degats du monstre : %d\n", monster.damage);
    printf("\n");

    Fight(&monster, &inventory);

    return 0;
}
