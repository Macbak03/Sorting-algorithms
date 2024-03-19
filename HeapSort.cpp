#include "HeapSort.h"

HeapSort::HeapSort(std::vector<int> &data) : SortingAlgorithm(data) {}

void HeapSort::convertDataIntoHeap(std::vector<int> &data, int size, int i) {
    int largest = i;
    int leftChild = 2 * i + 1;
    int rightChild = 2 * i + 2;

    if (leftChild < size && data[leftChild] > data[largest]) {
        largest = leftChild;
    }
    if (rightChild < size && data[rightChild] > data[largest]) {
        largest = rightChild;
    }
    if (largest != i) {
        std::swap(data[i], data[largest]);

        convertDataIntoHeap(data, size, largest);
    }
}

std::vector<int> HeapSort::sort() {
    int size = dataVector.size();
    for (int i = size / 2 - 1; i >= 0; i--) {
        convertDataIntoHeap(dataVector, size, i);
    }
    for (int i = size - 1; i >= 0; i--) {
        std::swap(dataVector[0], dataVector[i]);

        convertDataIntoHeap(dataVector, i, 0);
    }
    return dataVector;
}
