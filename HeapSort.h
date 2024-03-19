#pragma once
#include "InsertionSort.h"


class HeapSort : public SortingAlgorithm{
private:
    void convertDataIntoHeap(std::vector<int> &data, int size, int i);
public:
    explicit HeapSort(std::vector<int> &data);
    std::vector<int> sort() override;
};
