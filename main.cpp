#include <iostream>
#include "src/quickSorter.h"
#include "src/mergeSorter.h"

using namespace std;

int main() {
    int array[20] = {343,1231,533,123,1456,786,1323,9878,547,75,
                     4343,6565,23423,1123,12213,23,131,990,1029,991};
    int array2[20] = {343,1231,533,123,1456,786,1323,9878,547,75,
                     4343,6565,23423,1123,12213,23,131,990,1029,991};

    quicksort(array,0,19);
    mergesort(array2,0,19);

    for (int i = 0; i < 20; i++)
        cout << array[i] << "\t" << array2[i] << endl;

    return 0;
}