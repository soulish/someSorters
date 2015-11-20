//
// Created by soulish on 11/19/15.
//

#include "quickSorter.h"

int partition(int s[], int l, int h){
    int i;
    int p;
    int firsthigh;

    p = h; //set the partition to be the last highest element in this range
    firsthigh = l; //start searching from the loweest element in this range
    for (i = l; i < h; i++){
        if (s[i] < s[p]){
            swap(s[i],s[firsthigh]);
            firsthigh++;
        }
    }
    swap(s[p],s[firsthigh]);
    return firsthigh;
}

void quicksort(int s[], int l, int h){
  int p;
  if ((h-l)>0){
    p = partition(s,l,h);
    quicksort(s,l,p-1);
    quicksort(s,p+1,h);
  }
}