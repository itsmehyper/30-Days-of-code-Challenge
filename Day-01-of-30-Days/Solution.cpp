#include <iostream>
using namespace std;

string reverseString(string str) {
    string result = "";
    for(int i=str.length(); i>=0; i--) {
        result += str[i];
    }
    return result;
}

// Example 1
int main() {
    // printing reverse of "Hello World"
    cout << reverseString("Hello World") << endl;
    return 0;
}