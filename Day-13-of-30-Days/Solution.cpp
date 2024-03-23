// Day 13 of 30 Days 👾
#include <iostream>
#include <unordered_map>
#include <string>
    using namespace std;

unordered_map<char, int> calculateVowels(const string& input) {
    unordered_map<char, int> vowelCounts;
    string vowels = "aeiou";

    for (char vowel : vowels) {
        vowelCounts[vowel] = 0;
    }

    string lowercaseInput = input;
    // Convert input string to lowercase
    for (char& c : lowercaseInput) {
        c = tolower(c);
    }

    for (char c : lowercaseInput) {
        if (vowels.find(c) != string::npos) {
            vowelCounts[c]++;
        }
    }

    return vowelCounts;
}

int main() {
    auto result1 = calculateVowels("Hello World");
    auto result2 = calculateVowels("Try");

    // Examples
    for (const auto& pair : result1) {
        cout << pair.first << ": " << pair.second << endl;
    }

    for (const auto& pair : result2) {
        cout << pair.first << ": " << pair.second << endl;
    }

    return 0;
}