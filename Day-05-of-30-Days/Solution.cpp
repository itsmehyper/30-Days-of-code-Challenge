// Day 05 of 30 Days 👾
#include <iostream>
#include <math.h>
using namespace std;

bool isPrime(int num) {
    if(num < 2) {
        return false;
    }
    for(int i=2; i<=(int)sqrt(num); i++) {
        if(num % i == 0) {
            return false;
        }
    }
    return true;
}

// Examples
int main() {
    cout << isPrime(5) << endl; // return 1 means true;
    cout << isPrime(99) << endl; // return 0 means false;
    return 0;
}