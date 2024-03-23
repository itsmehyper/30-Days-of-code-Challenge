# Day 13 of 30 Days 👾
def calculate_vowels(input_str):
    vowel_counts = {}
    vowels = "aeiou"

    for vowel in vowels:
        vowel_counts[vowel] = 0

    input_str = input_str.lower()
    for char in input_str:
        if char in vowels:
            vowel_counts[char] += 1

    return vowel_counts

# Examples
print(calculate_vowels("Hello World"))
print(calculate_vowels("Try"))