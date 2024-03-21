// Day 12 of 30 Days 👾

#include <iostream>
#include <algorithm>
using namespace std;

bool isAnagram(string str1, string str2) {
    str1.erase(remove_if(str1.begin(), str1.end(), [](char c) { 
        return !isalnum(c); }),
    str1.end());

    // converting all characters to lowercase
    transform(str1.begin(), str1.end(), str1.begin(), ::tolower);

    str2.erase(remove_if(str2.begin(), str2.end(), [](char c) { 
        return !isalnum(c); }),
    str2.end());

    // converting all characters to lowercase
    transform(str2.begin(), str2.end(), str2.begin(), ::tolower);

    // sorting
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    return str1 == str2;
}

// Examples
int main() {
    cout << isAnagram("hello", "world") << endl; // returns 0 means false
    cout << isAnagram("test", "test") << endl; // returns 1 means true
    return 0;
}