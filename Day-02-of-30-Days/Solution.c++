// Day 02 of 30 Days 👾

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

string decidingCategory(double data) {
    if (data < 18.5) {
        return "Underweight";
    } else if (data >= 18.5 && data <= 24.9) {
        return "Healthy";
    } else if (data >= 25.0 && data <= 29.9) {
        return "Overweight";
    } else {
        return "Obesity";
    }
}

pair<double, string> calculateBMI(double height, double weight) {
    if(height == 0 || weight == 0) {
        cout << "Invalid Input" << endl;
        exit(0);
    }
    double BMI = weight / pow(height/100, 2);
    return {round(BMI * 100) / 100.0, decidingCategory(BMI)};
}


// Example 1
int main() {
    double height = 160, weight = 49;
    auto result = calculateBMI(height, weight);
    cout << "BMI: " << result.first << ", Category: " << result.second << endl;
}