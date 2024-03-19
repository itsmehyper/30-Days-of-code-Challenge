# Day 09 of 30 Days 👾

def sum_of_digits(num):
    # base case
    if num < 10:
        return num

    sum = 0;
    while num != 0:
        sum += num % 10
        num //= 10

    return sum_of_digits(sum)

# Example
print(sum_of_digits(2345))