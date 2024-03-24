// Day 15 of 30 Days 👾

function generateHexCode(red, green, blue) {
    function toHexString(value) {
        let hex = value.toString(16).toUpperCase();
        return hex.length == 1 ? "0" + hex : hex;
    }
    return `#${toHexString(red)}${toHexString(green)}${toHexString(blue)}`;
}

// examples
console.log(generateHexCode(0, 0, 0)); // #000000
console.log(generateHexCode(255, 255, 255)); // #FFFFFF
console.log(generateHexCode(255, 255, 0)); // #FFFF00
console.log(generateHexCode(0, 255, 0)); // #00FF00
console.log(generateHexCode(0, 0, 255)); // #0000FF