// Day 03 of 30 Days 👾

#include <iostream>
using namespace std;

bool isLeapYear(int year) {
    if(year % 400 == 0) {
        return true;
    } else if(year % 4 == 0 && year % 100 != 0) {
        return true;
    } else {
        return false;
    }
}

// examples
int main() {
    cout << isLeapYear(2019) << endl; // return 0 means false
    cout << isLeapYear(2016) << endl; // return 1 means true
}