#include "ShellSort.h"
#include <math.h>

ShellSort::ShellSort(std::vector<int> &data) : SortingAlgorithm(data) {}

std::vector<int> ShellSort::sort() {
    int dataSize = dataVector.size();
    std::vector<int> gaps;
    int k = 0;
    int gap = 0;
    while (gap <= dataSize) {
        if(gap == 0){
            gaps.push_back(gap + 1);
        }
        gap = pow(4, k+1) + 3 * pow(2, k) + 1;
        gaps.push_back(gap);
        k++;
    }
    for (int gapIndex = gaps.size() - 1; gapIndex >= 0; gapIndex--) {
        int g = gaps[gapIndex];
        for (int i = g; i < dataSize; i++) {
            int key = dataVector[i];
            int j = i;
            while (j >= g && dataVector[j - g] > key) {
                dataVector[j] = dataVector[j - g];
                j-=g;
            }
            dataVector[j] = key;
        }
    }
    return dataVector;
}