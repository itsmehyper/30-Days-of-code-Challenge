# Day 10 of 30 Days 👾

def common_elements(num, num2):
    res = []
    for i in num:
        if i in num2:
            res.append(i)
    return res

def print_array(array):
    print("[" + ", ".join(str(num) for num in array) + "]")

# Examples
array1 = [1, 2, 3]
array2 = [4, 5, 6]
result1 = common_elements(array1, array2)
print_array(result1)  # Output: []

array3 = [1, 2, 3, 4]
array4 = [3, 4, 5, 6]
result2 = common_elements(array3, array4)
print_array(result2)  # Output: [3, 4]
