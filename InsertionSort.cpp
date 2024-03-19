#include "InsertionSort.h"

InsertionSort::InsertionSort(std::vector<int> &data) : SortingAlgorithm(data){}

std::vector<int> InsertionSort::sort() {
    for (int i = 1; i < dataVector.size(); i++) {
        int key = dataVector[i];
        int j = i - 1;
        while (j > -1 && dataVector[j] > key) {
            dataVector[j + 1] = dataVector[j];
            j--;
        }
        dataVector[j + 1] = key;
    }
    return dataVector;
}




