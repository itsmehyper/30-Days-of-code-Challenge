// Day 13 of 30 Days 👾
#include <iostream>
#include <cmath>
    using namespace std;

double convertToMiles(double kilometers) {
    return round(kilometers * 0.621371);
}

double convertToKilometers(double miles) {
    return (miles * 1.60934);
}

// Examples
int main() {
    cout << convertToKilometers(10) << endl;
    cout << convertToMiles(16.0934) << endl;
    return 0;
}