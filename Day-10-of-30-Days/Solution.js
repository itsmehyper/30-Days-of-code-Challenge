// Day 10 of 30 Days 👾

function commonElements(num, num2) {
    const res = [];
    let count = 0;
    for (let i = 0; i < num.length; i++) {
        for (let j = 0; j < num2.length; j++) {
            if (num[i] === num2[j]) {
                res[count] = num[i];
                count++;
                break;
            }
        }
    }
    return res.slice(0, count);
}

function printArray(array) {
    let result = "[";
    for (let i = 0; i < array.length; i++) {
        result += array[i];
        if (i < array.length - 1) {
            result += ", ";
        }
    }
    result += "]";
    console.log(result);
}

// Examples
const array1 = [1, 2, 3];
const array2 = [4, 5, 6];
const result1 = commonElements(array1, array2);
printArray(result1); // Output: []

const array3 = [1, 2, 3, 4];
const array4 = [3, 4, 5, 6];
const result2 = commonElements(array3, array4);
printArray(result2); // Output: [3, 4]