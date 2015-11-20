#include <iostream>
#include "src/quickSorter.h"
#include "src/mergeSorter.h"
#include "src/heapSorter.h"
#include "src/radixSorter.h"
#include "src/selectionSorter.h"

using namespace std;

int main() {
    int arrayQ[20] = {343,1231,533,123,1456,786,1323,9878,547,75,
                     4343,6565,23423,1123,12213,23,131,990,1029,991};
    int arrayM[20] = {343,1231,533,123,1456,786,1323,9878,547,75,
                      4343,6565,23423,1123,12213,23,131,990,1029,991};
    int arrayH[20] = {343,1231,533,123,1456,786,1323,9878,547,75,
                      4343,6565,23423,1123,12213,23,131,990,1029,991};
    int arrayR[20] = {343,1231,533,123,1456,786,1323,9878,547,75,
                      4343,6565,23423,1123,12213,23,131,990,1029,991};
    int arrayS[20] = {343,1231,533,123,1456,786,1323,9878,547,75,
                      4343,6565,23423,1123,12213,23,131,990,1029,991};

    quicksort(arrayQ,0,19);
    mergesort(arrayM,0,19);
    heapsort(arrayH,20);
    radixsort(arrayR,20);
    selectionsort(arrayS,20);

    for (int i = 0; i < 20; i++)
        cout << arrayQ[i] << "\t" << arrayM[i] << "\t" << arrayH[i] << "\t" << arrayR[i] <<
                "\t" << arrayS[i] << endl;

    return 0;
}