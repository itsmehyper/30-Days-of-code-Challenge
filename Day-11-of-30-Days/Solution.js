// Day 11 of 30 Days 👾

function calculateAge(dob) {
    let birthDate = new Date(dob);
    let currentDate = new Date();

    let diffTime = Math.abs(currentDate.getTime() - birthDate.getTime());
    let diffDays = Math.ceil(diffTime / (1000 * 60 * 60 * 24)) - 1;

    let years = Math.floor(diffDays / 365);
    let months = Math.floor((diffDays % 365) / 30);
    let days = Math.floor((diffDays % 365) % 30);

    return [days, months, years];
}

// Example 1
console.log(calculateAge("2023-06-10")); // Output: [14, 9, 0]

// Example 2
console.log(calculateAge("1993-11-12")); // Output: [16, 4, 30]