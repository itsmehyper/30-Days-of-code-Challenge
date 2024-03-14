// Day 04 of 30 Days 👾

function isPalindrome(str) {

    // removing non alphabetic characters, this method work same as java's removeAll method!
    let text = str.replace(/[^a-zA-Z]/g, "").toLowerCase();
    let first = 0;
    let last = text.length - 1;

    //comparing characters
    while (first < last) {
        if (text[first] != text[last]) {
            return false;
        }
        first += 1;
        last -= 1;
    }
    return true;
}

// Example 1
console.log(isPalindrome("Hello Wrold!"));

// Example 2
console.log(isPalindrome("NaN"));