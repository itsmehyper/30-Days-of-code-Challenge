// Day 03 of 30 Days 👾

function isLeapYear(year) {
    if(year % 400 == 0) {
        return true;
    } else if(year % 4 == 0 && year % 100 != 0) {
        return true;
    } else {
        return false;
    }
}

// Example 1
console.log(isLeapYear(2019));

// Example 2
console.log(isLeapYear(2016));