# Day 08 of 30 Days 👾

def power_of_two(num):
    if num < 1:
        return False
    return (num & (num - 1)) == 0

# Example 1
print(power_of_two(6)) # false

# Example 2
print(power_of_two(8)) # true