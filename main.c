#include <stdio.h>
#include <stdlib.h>
#include "characters.h"
#include "sort.h"
#include "ascii_art_characters.h"

int tour = 0;

int main() {
    int choice = 0;
    printf("\tBienvenue dans le jeu Dungeons & Dragons !\n\n");
    printf("Que voulez-vous faire ?\n\n");
    printf("[1] Commencer la partie \n");
    printf("[2] Quitter \n");
    printf("\n>> \n");

    // Affichage Personnages //
//    human();
//    nain();
//    demon();
//    elfe();
//    demon2();
//    lutin();

    scanf("%d", &choice);
        switch (choice) {
            case 1:
                launchDice(6);
//                generateRandomCharacters();
//                generateRandomSkills();
//                showSkills(skillsValues);
//                launchDice(6);
//            showSkills(skillsValues);
                break;
            case 2:
                printf("Bye Bye!");
                break;
            default:
                break;
        }
        return 0;
    }
