# Day 02 of 30 Days
import re

def is_palindrome(strr):
    # removing non alphabetic characters, this method work same as java's removeAll method!
    text = re.sub("[^a-zA-Z]", "", strr).lower()

    first = 0
    last = len(text) - 1

    # comparing characters
    while first < last:
        if text[first] != text[last]:
            return False
        first += 1
        last -= 1
    return True


# Example 1
print(is_palindrome("Hello Wrold!"))

# Example 2
print(is_palindrome("NaN"))