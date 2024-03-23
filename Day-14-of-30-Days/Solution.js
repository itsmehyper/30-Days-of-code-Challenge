// Day 13 of 30 Days 👾
function convertToMiles(kilometers) {
    return Math.round(kilometers * 0.621371);
}

function convertToKilometers(miles) {
    return (miles * 1.60934);
}

// Examples
console.log(convertToKilometers(10));
console.log(convertToMiles(16.0934));