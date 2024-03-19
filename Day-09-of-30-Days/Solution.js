// Day 09 of 30 Days 👾

function sumOfDigits(num) {
    // base case
    if (num < 10) {
        return num;
    }

    let sum = 0;
    while (num != 0) {
        sum += num % 10;
        num = Math.floor(num / 10);
    }

    return sumOfDigits(sum);
}

// examples
console.log(sumOfDigits(2345));