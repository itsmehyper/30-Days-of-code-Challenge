// Day 05 of 30 Days 👾

#include <stdio.h>
#include <math.h>

int isPrime(int num) {
    if(num < 2) {
        return 0;
    }
    for(int i=2; i<=(int)sqrt(num); i++) {
        if(num % i == 0) {
            return 0;
        }
    }
    return 1;
}

// Examples
int main() {
    printf("%d\n", isPrime(5)); // return 1 means true;
    printf("%d\n", isPrime(99)); // return 0 means false;
    return 0;
}