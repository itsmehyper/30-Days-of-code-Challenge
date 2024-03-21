// Day 12 of 30 Days 👾

function isAnagram(str1, str2) {
    let s1 = str1.replace(/[^a-zA-Z]/g, "").toLowerCase();
    let s2 = str2.replace(/[^a-zA-Z]/g, "").toLowerCase();

    if(str1.length == str2.length) {
        let count = 0;
        for(let i=0; i<str1.length; i++) {
            for(let j=0; j<str2.length; j++) {
                if(str1[i] == str2[j]) {
                    count++;
                    break;
                }
            }
        }
        if(count == str1.length) {
            return true;
        }
    }
    return false;
}


// Example s
console.log(isAnagram("hello", "world")); // false
console.log(isAnagram("test", "test")); // true
console.log(isAnagram("boy", "boys")); // false