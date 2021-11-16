//
// Created by valentin on 10/26/2021.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "characters.h"

/* To remember :
 * [1] : Force,
 * [2] : Dexterite,
 * [3] : Sagesse,
 * [4] : Intelligence,
 * [5] : Constitution,
 * [6] : Charisme
 */

// Tableau des 6 valeurs de compétences //
int *skillsValues[6] = {0};

void launchDice(int number) {
    // On commence par initialiser le générateur de nombre pseudo-aléatoires //
    srand(time(NULL));

    // Tableau des 6 valeurs pour le lancer de dés //
    int diceValues[6] = {0};

    for (int i = 0; i < number; i++) {
        int value = rand() % 19 + 1;    // on tire une valeur entre 1 et 20
        diceValues[i] = value;
    }
    showArray(number, diceValues); // on affiche les valeurs tirées
    addValue(number, diceValues, &skillsValues); // on lance la procédure d'ajout des nombres tirés
}

// FONCTIONNEL
void showArray(int size, int *diceValues){
    printf("\nVous avez tires les valeurs : ");
    for (int i = 0; i < size; i++) {
        printf("\n Valeur %d : %d", i, diceValues[i]);
    }
}
// FONCTIONNEL
void showSkills(int *skillsValues){
    printf("\n ----- Points de competences -----");
    printf("\nForce : \t%d", skillsValues[0]);
    printf("\nDexterite : \t%d", skillsValues[1]);
    printf("\nSagesse : \t%d", skillsValues[2]);
    printf("\nIntelligence : \t%d", skillsValues[3]);
    printf("\nConstitution : \t%d", skillsValues[4]);
    printf("\nCharisme : \t%d", skillsValues[5]);
}

// FONCTIONNEL
void addValue(int size, int *diceValues, int *skillsValues){
    for (int i = 0; i < size; i++) {
        int choice = 0;
        do {
            printf("\n\nA quelle competence ajouter la valeur %d ?", diceValues[i]);
            printf("\n[1] : Force, \n[2] : Dexterite, \n[3] : Sagesse, \n[4] : Intelligence, \n[5] : Constitution, \n[6] : Charisme\n >");
            scanf("%d", &choice);
            switch (choice) {
                case 1:
                    skillsValues[0] += diceValues[i];
                    break;
                case 2:
                    skillsValues[1] += diceValues[i];
                    break;
                case 3:
                    skillsValues[2] += diceValues[i];
                    break;
                case 4:
                    skillsValues[3] += diceValues[i];
                    break;
                case 5:
                    skillsValues[4] += diceValues[i];
                    break;
                case 6:
                    skillsValues[5] += diceValues[i];
                    break;
                default:
                    printf("\n\nA quelle competence ajouter la valeur %d ?", diceValues[i]);
                    printf("\n[1] : Force, \n[2] : Dexterite, \n[3] : Sagesse, \n[4] : Intelligence, \n[5] : Constitution, \n[6] : Charisme\n >");
                    scanf("%d", &choice);
                    break;
            }

        } while (choice > 6);
    }
}

int generateRandomSkills(){
    int skillsValues[6] = {0};
    srand(time(NULL));
    for (int i = 0; i < 6; i++) {
        int value = rand() % 19 + 1;    // on tire une valeur entre 1 et 20
        skillsValues[i] = value;
    }
    showArray(6, skillsValues);
    return skillsValues;
}

int sumSkills(int *skillValues){
    int somme = 0;
    for (int i = 0; i < 6; i++) {
        somme += skillValues[i];
    }
    return  somme;
}

int generateRandomCharacters(){
    /* Infos personnages
     * 0 : Nain & Guerrier
     * 1 : Humain & Mage
     * 2 : Elfe & Aventurier
     */
    int charactersValues[2] = {0};
    srand(time(NULL));

    // Définition de la race //
    int race = rand() % 3;    // on tire une 1ère valeur entre 0 et 3
    charactersValues[0] = race;

    switch (charactersValues[0]) {
        case 0:
            printf("")
    }

    // Définition de la classe //
    int classe = rand() % 3;    // on tire une 1ère valeur entre 0 et 2
    charactersValues[1] = classe;
    showArray(2, charactersValues);




    return charactersValues;
}

int forceOuMagie(){
    srand(time(NULL));
    // 0 : Force / 1 : Magie
    return rand() % 2;
}






