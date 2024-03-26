// Day 17 of 30 Days 👾
#include <stdio.h>

int recursiveFactorial(int num) {
    if(num == 0) {
        return 1;
    }

    return num * recursiveFactorial(num - 1);
}

// Examples
int main() {
    printf("%d\n", recursiveFactorial(5)); // Output: 120
    printf("%d\n", recursiveFactorial(1)); // Output: 1
    printf("%d\n", recursiveFactorial(3)); // Output: 6
    return 0;
}