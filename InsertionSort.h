#pragma once
#include "SortingAlgorithm.h"

class InsertionSort : public SortingAlgorithm{
public:
    explicit InsertionSort(std::vector<int> &data);
    std::vector<int> sort() override;
};


