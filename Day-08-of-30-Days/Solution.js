// Day 08 of 30 Days 👾

function powerOfTwo(num) {
    if (num < 1) return false;
    return (num & (num - 1)) == 0;
}

// Example
console.log(powerOfTwo(6)); // false
console.log(powerOfTwo(8)); // true