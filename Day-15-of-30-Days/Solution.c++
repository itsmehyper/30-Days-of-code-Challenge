// Day 15 of 30 Days 👾
#include <iostream>
#include <iomanip>
#include <sstream>
#include <cctype>
#include <string>
#include <algorithm>
using namespace std;

string generateHexCode(int red, int green, int blue) {
    red = max(0, min(red, 255));
    green = max(0, min(green, 255));
    blue = max(0, min(blue, 255));

    // Format hexadecimal directly using stringstream
    stringstream hexStream;
    hexStream << "#" 
        << hex << setw(2) << setfill('0') << red 
        << hex << setw(2) << setfill('0') << green 
        << hex << setw(2) << setfill('0') << blue;

    string hexCode = hexStream.str();
    transform(hexCode.begin(), hexCode.end(), hexCode.begin(), ::toupper);
    return hexCode;
}

// examples
int main() {
    cout << generateHexCode(0, 0, 225) << endl;     // #0000E1
    cout << generateHexCode(255, 255, 255) << endl; // #FFFFFF
    return 0;
}