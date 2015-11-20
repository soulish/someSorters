//
// Created by soulish on 11/19/15.
//

#ifndef SOMESORTERS_HEAPSORTER_H
#define SOMESORTERS_HEAPSORTER_H

#include "PriorityQueue.h"

void heapsort(int s[], int n){
    PriorityQueue q;

    q.make_heap_alt(s,n);
    for (int i = 0; i < n; i++)
        s[i] = q.extract_min();
}

#endif //SOMESORTERS_HEAPSORTER_H
