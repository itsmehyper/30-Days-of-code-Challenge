// Day 07 of 30 days 👾

function sumOfIntegers(num) {
    let sum = 0;
    for (let i = 1; i <= num; i++) {
        sum += i;
    }
    return sum;
}

// example 1
console.log(sumOfIntegers(5)); // ans: 15

// example 2
console.log(sumOfIntegers(10)); // ans: 55