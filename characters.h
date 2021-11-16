//
// Created by valentin on 10/26/2021.
//

#ifndef DUNGEONS_DRAGONS_CHARACTERS_H
#define DUNGEONS_DRAGONS_CHARACTERS_H

void launchDice(int number);
int sumSkills(int *skillValues);
void showArray(int size, int *diceValues);
void showSkills(int *skillValues);
void addValue(int index, int *diceValues, int *skillValues);
int generateRandomSkills();
int generateRandomCharacters();
void initializePoints();

#endif //DUNGEONS_DRAGONS_CHARACTERS_H
