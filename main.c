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
        char nameFIM[] = "chara/slime.txt";
    }

    InitCharacter(nameFI, &inventory);
    InitMonster(nameFIM, &monster);
    
    ReadText("description/welcome.txt");
    ReadText("choice/choice1.txt");
    if(MakeChoice() == 0){
        ReadText("description/peacefullife.txt");
        printf("FIN 'Vie paisible'");
    }
    else{
        ReadText("description/begintrip.txt");
        Fight(&monster, &inventory);
        ReadText("description/congrast1.txt");
        ReadText("description/kidnapping.txt");
        ReadText("choice/choice2.txt");
        if(MakeChoice() == 0){
            ReadText("description/cave.txt");
            char nameFI[] = "chara/swordf.txt";
            char nameFIM[] = "chara/gipsy.txt";
    
            InitCharacter(nameFI, &inventory);
            InitMonster(nameFIM, &monster);
            Fight(&monster, &inventory);
            ReadText("description/meetdwarf.txt");
            ReadText("choice/choice3b.txt");
            if(MakeChoice() == 0){
                ReadText("description/staycave.txt");
                printf("FIN 'Forgeron'");
            }
            else {
                ReadText("description/goback.txt");
                char nameFI[] = "chara/swordg.txt";
                char nameFIM[] = "chara/demoninf.txt";
                InitCharacter(nameFI, &inventory);
                InitMonster(nameFIM, &monster);
                Fight(&monster, &inventory);
                ReadText("choice/choice4.txt");
                if (MakeChoice() == 0){
                    ReadText("description/fightb.txt");
                    printf("FIN 'veritable heros'");
                } else {
                    ReadText("description/runb.txt");
                    ReadText("choice/choice5.txt");
                    if (MakeChoice() == 0){
                        ReadText("description/victoryb.txt");
                        printf("FIN 'Happy End'");
                    }else {
                        ReadText("description/deathb.txt");
                        printf("FIN 'Hardcore'");
                    }
                }
            }
                    
        }else {
            ReadText("description/forest.txt");
            char nameFI[] = "chara/swordf.txt";
            char nameFIM[] = "chara/loup.txt";
            InitCharacter(nameFI, &inventory);
            InitMonster(nameFIM, &monster);
            Fight(&monster, &inventory);
            ReadText("description/meetelf.txt");
            ReadText("choice/choice3a.txt");
            if(MakeChoice() == 0){
                ReadText("description/stayforest.txt");
                printf("FIN 'No comment'");
            }else {
                ReadText("description/yearsa.txt");
                char nameFI[] = "chara/swordg.txt";
                char nameFIM[] = "chara/demonsup.txt";
                InitCharacter(nameFI, &inventory);
                InitMonster(nameFIM, &monster);
                Fight(&monster, &inventory);
                ReadText("choice/choice4.txt");
                if (MakeChoice() == 0){
                    ReadText("description/fighta.txt");
                    ReadText("choice/choice6.txt");
                    if (MakeChoice() == 1){
                        ReadText("description/wedding.txt");
                        printf("FIN 'Mariage'");
                    }else {
                        printf("FIN 'Veritable amis'");
                    }
                }else{
                    ReadText("description/runa.txt");
                    ReadText("choice/choice5.txt");
                    if (MakeChoice() == 0){
                        ReadText("description/victorya.txt");
                        printf ("FIN 'Happy End'");
                    }else {
                        ReadText("description/deatha.txt");
                        printf ("FIN 'Hardcore'");
                    }
                }
            }
        }
    }
    return 0;
}
