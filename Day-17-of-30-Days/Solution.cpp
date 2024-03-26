// Day 17 of 30 Days 👾
#include <iostream>
using namespace std;

int recursiveFactorial(int num) {
    if(num == 0) {
        return 1;
    }

    return num * recursiveFactorial(num - 1);
}

// Examples
int main() {
    cout << recursiveFactorial(5) << endl; // Output: 120
    cout << recursiveFactorial(1) << endl; // Output: 1
    cout << recursiveFactorial(3) << endl; // Output: 6
}