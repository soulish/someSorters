//
// Created by soulish on 11/19/15.
//

#ifndef SOMESORTERS_PRIORITYQUEUE_H
#define SOMESORTERS_PRIORITYQUEUE_H
#include <iostream>
#include <stdlib.h>
#include <algorithm>

const int PQ_SIZE = 100;

using namespace std;

class PriorityQueue {
public:
    int q[PQ_SIZE+1];
    int n;

    PriorityQueue(){
        n = 0;
    }

    int parent(int n){
        if (n == 1) return -1;
        else return (int)n/2;
    }

    int young_child(int n){
        return 2*n;
    }

    void insert(int x);

    void bubble_up(int p);

    void mySwap(int p,int pp){
        swap(q[p],q[pp]);
    }

    void print(){
        for (int i = 1; i <= n; i++)
            cout << i << "\t" << q[i] << endl;
    }

    void make_heap(int array[], int l);

    void make_heap_alt(int array[], int l);

    int extract_min();

    void bubble_down(int p);
};


#endif //SOMESORTERS_PRIORITYQUEUE_H
