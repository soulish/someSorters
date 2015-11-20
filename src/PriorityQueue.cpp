//
// Created by soulish on 11/19/15.
//

#include "PriorityQueue.h"

void PriorityQueue::insert(int x){
    if (n >= PQ_SIZE)
        cout << "WARNING" << endl;
    else{
        n = (n) + 1;
        q[n] = x;
        bubble_up(n);
    }
}

void PriorityQueue::bubble_up(int p){
    if (parent(p) == -1) return; //at the root, no parent
    if (q[parent(p)] > q[p]){
        mySwap(p,parent(p));
        bubble_up(parent(p));
    }
}

void PriorityQueue::make_heap(int array[], int l){
    for (int i = 0; i < l; i++)
        this->insert(array[i]);
}

void PriorityQueue::make_heap_alt(int array[], int l){
    n = l;
    for (int i = 0; i < n; i++) q[i+1] = array[i];
    for (int i = n/2; i >= 1; i--) bubble_down(i);
}

int PriorityQueue::extract_min(){
    int min = -1;
    if (n <= 0) cout << "ERROR" << endl;
    else{
        min = q[1];
        q[1] = q[n];
        n = n - 1;
        bubble_down(1);
    }
    return min;
}

void PriorityQueue::bubble_down(int p){
    int c,i,min_index;
    c = young_child(p);
    min_index = p;

    for (i = 0; i <= 1; i++){
        if (c+i <= n){
            if (q[min_index] > q[c+i]) min_index = c + i;
        }
    }

    if (min_index != p){
        mySwap(p,min_index);
        bubble_down(min_index);
    }
}
