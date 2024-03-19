#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include "InsertionSort.h"
#include "ShellSort.h"
#include "SelectionSort.h"
#include "HeapSort.h"
#include "QuickSort.h"

using namespace std;


vector<int> sortUsingAlgorithm(vector<int> &data, int algorithm_number) {
    switch (algorithm_number) {
        case 1: {
            InsertionSort insertionSort(data);
            return insertionSort.sort();
        }
        case 2: {
            ShellSort shellSort(data);
            return shellSort.sort();
        }
        case 3: {
            SelectionSort selectionSort(data);
            return selectionSort.sort();
        }
        case 4: {
            HeapSort heapSort(data);
            return heapSort.sort();
        }
        case 5: {
            QuickSort quickSort(data);
            return quickSort.leftPivotSort(0, data.size() - 1);
        }
        case 6: {
            srand(time(nullptr));
            QuickSort quickSort(data);
            return quickSort.randomPivotSort(0, data.size() - 1);
        }
        default:
            cerr << "invalid algorithm number.";
            break;
    }

}

/*int main(int argc, char *argv[]) {
    if (argc != 3 || string(argv[1]) != "--algorithm") {
        cerr << "Usage: " << argv[0] << " --algorithm <algorithmNumber>" << endl;
        exit(1);
    }

    int algorithmNumber = atoi(argv[2]);

    vector<int> data;
    string line;
    while (getline(cin, line)) {
        istringstream iss(line);
        int num;
        while (iss >> num) {
            data.push_back(num);
        }
    }

    vector<int> sortedData = sortUsingAlgorithm(data, algorithmNumber);

    cout << "Sorted data: ";
    for (size_t i = 0; i < sortedData.size() && i < 10; ++i) {
        cout << sortedData[i] << " ";
    }
    cout << endl;

    return 0;
}*/

int main() {
    vector<int> data = {8, 4, 6, 2, 1, 3, 5, 11, 10, 15};

    int algorithmNumber;
    cout << "podaj numer algorytmu:\n" << "1. Insertion sort\n" << "2. Shell sort\n" << "3. Selection sort\n"
         << "4. Heap sort\n" << "5. Quick sort z piwotem z lewej strony\n" << "6. Quick sort z randomowym piwotem\n";
    cin >> algorithmNumber;
    vector<int> sortedData = sortUsingAlgorithm(data, algorithmNumber);

    cout << "Sorted data: ";
    for (size_t i = 0; i < sortedData.size() && i < 10; ++i) {
        cout << sortedData[i] << " ";
    }
    cout << endl;

    return 0;
}
