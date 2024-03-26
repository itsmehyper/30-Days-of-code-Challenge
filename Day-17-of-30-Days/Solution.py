# Day 17 of 30 Days 👾
def recursive_factorial(num):
    if num == 0:
        return 1
    
    return num * recursive_factorial(num - 1)

# Examples
print(recursive_factorial(5)) # Output: 120
print(recursive_factorial(3)) # Output:6
print(recursive_factorial(1)) # Output: 1