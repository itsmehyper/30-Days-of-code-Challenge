// Day 10 of 30 Days 👾

#include <iostream>
#include <vector>
using namespace std;

vector<int> commonElements(vector<int>& num, vector<int>& num2) {
    vector<int> res;
    for (int i : num) {
        for (int j : num2) {
            if (i == j) {
                res.push_back(i);
                break;
            }
        }
    }
    return res;
}

void printArray(vector<int>& array) {
    cout << "[";
    for (int i = 0; i < array.size(); i++) {
        cout << array[i];
        if (i < array.size() - 1) {
            cout << ", ";
        }
    }
    cout << "]\n";
}

int main() {
    // Examples
    vector<int> array1 = {1, 2, 3};
    vector<int> array2 = {4, 5, 6};
    vector<int> result1 = commonElements(array1, array2);
    printArray(result1); // Output: []

    vector<int> array3 = {1, 2, 3, 4};
    vector<int> array4 = {3, 4, 5, 6};
    vector<int> result2 = commonElements(array3, array4);
    printArray(result2); // Output: [3, 4]
    return 0;
}
