#include <vector>

class SortingAlgorithm {
public:
    explicit SortingAlgorithm(std::vector<int>& data);
protected:
    virtual std::vector<int> sort() = 0;
    std::vector<int> dataVector;
};


