// Day 13 of 30 Days 👾

#include <stdio.h>
#include <math.h>

    double
    convertToMiles(double kilometers) {
    return round(kilometers * 0.621371);
}

double convertToKilometers(double miles) {
    return (miles * 1.60934);
}

// Examples
int main() {
    printf("%.4f\n", convertToKilometers(10));
    printf("%.2f\n", convertToMiles(16.0934));

    return 0;
}