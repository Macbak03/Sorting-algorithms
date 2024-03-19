#include "InsertionSort.h"

class QuickSort : public SortingAlgorithm{
private:
    int partition(int firstIndex, int lastIndex, int pivotIndex);
    std::vector<int> sort() override;
public:
    explicit QuickSort(std::vector<int> &data);
    std::vector<int> leftPivotSort(int firstIndex, int lastIndex);
    std::vector<int> randomPivotSort(int firstIndex, int lastIndex);
};

