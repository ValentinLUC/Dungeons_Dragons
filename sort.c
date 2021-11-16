//
// Created by Valentin on 11/5/2021.
//

#include "sort.h"

void bubbleSort(int intTableToSort[]) {
    for (int i = 0; i < TABLE_SIZE; i++) {
        for (int j = 0; j < TABLE_SIZE-1; j++) {
            int swap = intTableToSort[j];
            if (intTableToSort[j] > intTableToSort[j + 1]) {
                intTableToSort[j] = intTableToSort[j + 1];
                intTableToSort[j + 1] = swap;
            }
        }
    }
    showConsoleTable(intTableToSort, TABLE_SIZE);
}

void showConsoleTable(const int *tableToShow, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d\t", *(tableToShow + i));
    }
}
