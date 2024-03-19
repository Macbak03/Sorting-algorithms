#include <cstdlib>
#include "QuickSort.h"

QuickSort::QuickSort(std::vector<int> &data) : SortingAlgorithm(data) {
}

int QuickSort::partition(int firstIndex, int lastIndex, int pivotIndex) {
    if(pivotIndex != firstIndex){
        std::swap(dataVector[firstIndex], dataVector[pivotIndex]);
    }
    int pivot = dataVector[firstIndex];
    int first = firstIndex;
    int last = lastIndex;
    while(first < last){
        while(dataVector[first] <= pivot){
            first++;
        }
        while(dataVector[last] > pivot){
            last--;
        }
        if(first < last)
            std::swap(dataVector[first], dataVector[last]);
    }
    std::swap(dataVector[firstIndex], dataVector[last]);
    return last;
}

std::vector<int> QuickSort::leftPivotSort(int firstIndex, int lastIndex) {
    int pivotIndex = firstIndex;
    if (firstIndex < lastIndex) {
        int partIndex = partition(firstIndex, lastIndex, pivotIndex);
        leftPivotSort(firstIndex, partIndex - 1);
        leftPivotSort(partIndex + 1, lastIndex);
    }
    return dataVector;
}

std::vector<int> QuickSort::randomPivotSort(int firstIndex, int lastIndex) {
    int pivotIndex;
    if(lastIndex != firstIndex){
        pivotIndex = firstIndex + rand() % (lastIndex - firstIndex);
    } else{
        pivotIndex = firstIndex;
    }
    if (firstIndex < lastIndex) {
        int partIndex = partition(firstIndex, lastIndex, pivotIndex);
        randomPivotSort(firstIndex, partIndex - 1);
        randomPivotSort(partIndex + 1, lastIndex);
    }
    return dataVector;
}

std::vector<int> QuickSort::sort() {
    return {};
}
