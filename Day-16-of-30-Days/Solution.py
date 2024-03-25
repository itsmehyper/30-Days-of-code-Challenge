# Day 16 of 30 Days 👾
def square_numbers(arr):
    return [number * number for number in arr]

# Examples
test1 = [3];
print(square_numbers(test1))

test2 = [1, 2, 3, 4, 5];
print(square_numbers(test2))

test3 = [0];
print(square_numbers(test3))

test4 = [10, 20, 30, 40, 50, 60, 70, 80, 90, 100];
print(square_numbers(test4))

test5 = [- 2, -1, 0, 1, 2];
print(square_numbers(test5))