// Day 17 of 30 Days 👾
function recursiveFactorial(num) {
    if(num == 0) {
        return 1;
    }

    return num * recursiveFactorial(num - 1);
}

// Examples
console.log(recursiveFactorial(5)); // Output: 120
console.log(recursiveFactorial(0)); // Output: 1
console.log(recursiveFactorial(3)); // Output: 6