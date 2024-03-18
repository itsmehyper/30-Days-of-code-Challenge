// Day 07 of 30 Days 👾

#include <stdio.h>

int sumOfIntegers(int num) {
    int sum = 0;
    for (int i = 1; i <= num; i++) {
        sum += i;
    }
    return sum;
}

int main() {
    // Example 1
    printf("%d\n", sumOfIntegers(5)); // ans: 15

    // Example 2
    printf("%d\n", sumOfIntegers(10)); // ans: 55
    return 0;
}