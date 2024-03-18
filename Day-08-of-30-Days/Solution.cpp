// Day 08 of 30 Days 👾

#include <iostream>
    using namespace std;

bool powerOfTwo(int num) {
    if (num < 1) {
        return false;
    }
    return (num & (num - 1)) == 0;
}

// examples
int main() {
    cout << powerOfTwo(6) << endl; // return 0 means false
    cout << powerOfTwo(8) << endl; // return 1 means true
    return 0;
}