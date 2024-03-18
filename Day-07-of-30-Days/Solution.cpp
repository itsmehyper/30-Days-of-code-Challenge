// Day 07 of 30 Days 👾

#include <iostream>
using namespace std;

int sumOfInteger(int num) {
    int sum = 0;
    for (int i = 1; i <= num; i++) {
        sum += i;
    }
    return sum;
}

int main() {
    // example 1
    cout << sumOfInteger(5) << endl; // ans: 15

    // example 2
    cout << sumOfInteger(10) << endl; // ans: 55
    return 0;
}