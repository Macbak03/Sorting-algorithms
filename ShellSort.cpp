#include "ShellSort.h"

ShellSort::ShellSort(std::vector<int> &data) : SortingAlgorithm(data) {}

std::vector<int> ShellSort::sort() {
    int dataSize = dataVector.size();
    int k = dataSize / 2;
    std::vector<int> gap;
    while (k > 0) {
        for (int i = 0; i < dataSize; i++) {
            for (int j = i; j < dataSize; j += k) {
                gap.push_back(dataVector[j]);
            }
            InsertionSort insertionSort(gap);
            std::vector<int> sortedGap = insertionSort.sort();
            int gapIndex = 0;
            for (int j = i; j < dataSize; j += k) {
                dataVector[j] = sortedGap[gapIndex++];
            }
            gap.clear();
        }
        k /= 2;
    }

    return dataVector;
}
