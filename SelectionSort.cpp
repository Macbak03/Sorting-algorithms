#include "SelectionSort.h"

SelectionSort::SelectionSort(std::vector<int> &data) : SortingAlgorithm(data) {}

std::vector<int> SelectionSort::sort() {
    for (int i = 0; i < dataVector.size() - 1; i++) {
        int key = i;
        for (int j = i + 1; j < dataVector.size(); j++) {
            if (dataVector[j] < dataVector[key]) {
                key = j;
            }
        }
        std::swap(dataVector[i], dataVector[key]);
    }

    return dataVector;
}
