//
// Created by soulish on 11/19/15.
//

#ifndef SOMESORTERS_SELECTIONSORTER_H
#define SOMESORTERS_SELECTIONSORTER_H

#include <iostream>
#include <stdlib.h>
#include <algorithm>

using namespace std;

void selectionsort(int s[], int n){
    int i,j;
    int min;

    for (i = 0; i < n; i++){
        min = i;
        for (j = i+1; j < n; j++){
            if (s[j] < s[min])
                swap(s[j],s[min]);
        }
    }
}

#endif //SOMESORTERS_SELECTIONSORTER_H
