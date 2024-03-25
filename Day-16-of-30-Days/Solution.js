// Day 16 of 30 Days 👾
function squareNumbers(numbers) {
    return numbers.map(number => number * number);
}

// Examples
test1 = [3];
console.log(squareNumbers(test1));

test2 = [1, 2, 3, 4, 5];
console.log(squareNumbers(test2));

test3 = [0];
console.log(squareNumbers(test3));

test4 = [10, 20, 30, 40, 50, 60, 70, 80, 90, 100];
console.log(squareNumbers(test4));

test5 = [- 2, -1, 0, 1, 2];
console.log(squareNumbers(test5));