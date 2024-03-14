// Day 04 of 30 Days 👾

#include <iostream>
#include <algorithm>
using namespace std;

bool isPalindrome(string str) {
    string text = str;
    // removing non alphabetic characters, this method work same as java's removeAll method!
    text.erase(remove_if(text.begin(), text.end(), [](char c) { 
        return !isalnum(c); 
    }), text.end());
    
    // converting all characters to lowercase
    transform(text.begin(), text.end(), text.begin(), ::tolower);
    
    // comparing all character from end to start
    for (int i = 0; i < text.length(); i++) {
        if (text[i] != text[text.length() - 1 - i]) {
            return false;
        }
    }
    return true;
}

//  Examples
int main() {
    cout << isPalindrome("A man, a plan, a canal ? Panama") << endl; // The output is 1 means true
    cout << isPalindrome("Code") << endl; // The output is 0 means false
    return 0;
}