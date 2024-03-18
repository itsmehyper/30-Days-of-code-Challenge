// Day 08 of 30 Days 👾

#include <stdio.h>

    int
    powerOfTwo(int num) {
    if (num < 1) {
        return 0;
    }
    return (num & (num - 1)) == 0;
}

int main() {
    printf("%d\n", powerOfTwo(6)); // return 0 means false
    printf("%d\n", powerOfTwo(8)); // return 1 means true
    return 0;
}