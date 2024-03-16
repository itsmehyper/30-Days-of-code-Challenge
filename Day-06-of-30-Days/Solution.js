// Day 06 of 30 Days 👾

function binaryToDecimal(binary) {
    if(binary == "") {
        return "Invalid Binary Number";
    }

    let dec = 0;
    for(let i=0; i<binary.length; i++) {
        if(binary[i] == '1' || binary[i] == '0') {
            dec = dec * 2 + parseInt(binary[i]);
        } else {
            throw new Error("Invalid Binary Number");
        }
    }
    return dec;
}

// example 1
console.log(binaryToDecimal("1011")); // Answer: 11

// example 2
console.log(binaryToDecimal("111")); // Answer: 7