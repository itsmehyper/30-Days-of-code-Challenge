# Day 07 of 30 Days 👾
def sum_of_integers(num):
    sum = 0
    for i in range(1, num+1):
        sum += i
    return sum

# Example 1
print(sum_of_integers(5)) # ans: 15

# Example 2
print(sum_of_integers(10)) # ans: 55