// Day 05 of 30 Days 👾
function isPrime(num) {
    if(num < 2) return false;
    for(let i=2; i<=Math.sqrt(num); i++) {
        if(num % i == 0) return false;
    }
    return true;
}

// Example 1
console.log(isPrime(5)); // true

// Example 2
console.log(isPrime(99)); // false