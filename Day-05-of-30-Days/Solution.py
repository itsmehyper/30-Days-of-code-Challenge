# Day 05 of 30 Days

import math
def is_prime(num):
    if num < 2:
        return False
    tc = int(math.sqrt(num))
    for i in range(2, tc+1):
        if num % i == 0:
            return False
    return True


# Example 1
print(is_prime(5)) # true

# Example 2
print(is_prime(99)) # false