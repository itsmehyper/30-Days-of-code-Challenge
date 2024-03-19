// Day 09 of 30 Days 👾

#include <stdio.h>

int sumOfDigits(int num) {
    // base case
    if (num < 10) {
        return num;
    }

    int sum = 0;
    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }

    return sumOfDigits(sum);
}

int main() {
    printf("%d\n", sumOfDigits(23345));
    return 0;
}