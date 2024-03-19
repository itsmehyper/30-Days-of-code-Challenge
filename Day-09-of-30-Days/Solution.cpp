// Day 09 of 30 Days 👾

#include <iostream>
using namespace std;

int sumOfDigits(int num) {
    // base case
    if (num < 10) {
        return num;
    }

    int sum = 0;
    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }

    return sumOfDigits(sum);
}

// examples
int main() {
    cout << sumOfDigits(2345) << endl;
    return 0;
}