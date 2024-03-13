// Day 02 of 30 Days 👾

function decidingCategory(data) {
    if (data < 18.5) {
        return "Underweight";
    } else if (data >= 18.5 && data <= 24.9) {
        return "Healthy";
    } else if (data >= 25.0 && data <= 29.9) {
        return "Overweight";
    } else {
        return "Obesity";
    }
}

function calculateBMI(height, weight) {
    if (height == 0 || weight == 0) {
        console.log("Invalid Input");
        process.exit(0);
    }
    let BMI = weight / Math.pow(height / 100, 2);
    return [Math.round(BMI * 100) / 100.0, decidingCategory(BMI)];
}

// Example 1
console.log(calculateBMI(160, 49));