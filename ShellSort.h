#pragma once
#include "InsertionSort.h"

class ShellSort : public SortingAlgorithm{
public:
    explicit ShellSort(std::vector<int> &data);
    std::vector<int> sort() override;
};


