// Day 16 of 30 Days 👾
#include <iostream>
#include <vector>
using namespace std;

vector<int> squareNumbers(vector<int> numbers) {
    vector<int> res(numbers.size());

    for(int i=0; i<numbers.size(); i++) {
        res[i] = numbers[i] * numbers[i];
    }

    return res;
}

void printResult(vector<int> numbers, vector<int> res) {
    cout << "Input: [";
    for (size_t i = 0; i < numbers.size(); i++) {
        cout << numbers[i];
        if (i < numbers.size() - 1) {
            cout << ", ";
        }
    }
    cout << "]\n";

    cout << "Expected Output: [";
    for (size_t i = 0; i < res.size(); i++) {
        cout << res[i];
        if (i < res.size() - 1) {
            cout << ", ";
        }
    }
    cout << "]\n\n";
}

// Examples
int main() {
    vector<int> test1 = {3};
    vector<int> result1 = squareNumbers(test1);
    printResult(test1, result1);

    vector<int> test2 = {1, 2, 3, 4, 5};
    vector<int> result2 = squareNumbers(test2);
    printResult(test2, result2);

    vector<int> test3 = {0};
    vector<int> result3 = squareNumbers(test3);
    printResult(test3, result3);

    vector<int> test4 = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    vector<int> result4 = squareNumbers(test4);
    printResult(test4, result4);

    vector<int> test5 = {-2, -1, 0, 1, 2};
    vector<int> result5 = squareNumbers(test5);
    printResult(test5, result5);

    return 0;
}