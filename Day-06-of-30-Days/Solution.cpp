// Day 06 of 30 Days 👾
#include <iostream>
#include <string>
using namespace std;

int binaryToDecimal(string binary) {
    if(binary == "") {
        cout << "Invalid Binary Number" << endl;
        return 0;
    }

    int dec = 0;
    for(int i=0; i<binary.length(); i++) {
        if(binary[i] == '1' || binary[i] == '0') {
            dec = dec * 2 + (binary[i] - '0');
        } else {
            throw invalid_argument("Invalid binary number");
        }
    }
    return dec;
}

// Examples
int main() {
    cout << binaryToDecimal("1011") << endl; // return 11
    cout << binaryToDecimal("111") << endl; // return 7
    return 0;
}