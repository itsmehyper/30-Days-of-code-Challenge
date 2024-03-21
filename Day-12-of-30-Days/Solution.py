# Day 12 of 30 Days 👾
import re

def is_angram(str1, str2):
    s1 = re.sub("[^a-zA-Z]", "", str1).lower()
    s2 = re.sub("[^a-zA-Z]", "", str2).lower()

    text1 = sorted(s1)
    text2 = sorted(s2)

    return text1 == text2


## Examples
print(is_angram("test", "test")) # True
print(is_angram("hello", "world")) # False