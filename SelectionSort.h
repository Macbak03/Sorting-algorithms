#pragma once
#include "InsertionSort.h"

class SelectionSort : public SortingAlgorithm{
public:
    explicit SelectionSort(std::vector<int> &data);
    std::vector<int> sort() override;
};


