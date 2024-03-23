function calculateVowels(input) {
    let vowelCounts = {};
    const vowels = "aeiou";

    for (let i = 0; i < vowels.length; i++) {
        let vowel = vowels[i];
        vowelCounts[vowel] = 0;
    }

    input = input.toLowerCase();

    for (let i = 0; i < input.length; i++) {
        let c = input[i];
        if (vowels.includes(c)) {
            vowelCounts[c]++;
        }
    }

    return vowelCounts;
}


console.log(calculateVowels("Hello World"));
console.log(calculateVowels("Try"));