// Day 03 of 30 Days 👾

#include <stdio.h>

int isLeapYear(int year) {
    if (year % 400 == 0) {
        return 1;
    } else if (year % 4 == 0 && year % 100 != 0){
        return 1;
    } else {
        return 0;
    }
}

// examples
int main() {
    printf("%d\n", isLeapYear(2019)); // return 0 means false
    printf("%d\n", isLeapYear(2016)); // return 1 means true
}

