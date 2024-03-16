# Day 06 of 30 Days 👾

def binary_to_decimal(binary):
    if binary == "":
        print("Invalid binary number")
        return 0
    decimal = 0
    for bin in binary:
        if bin == '1' or bin == '0':
            decimal = decimal * 2 + int(bin)
        else:
            raise ValueError("Invalid Binary Number")
    return decimal


# example 1
print(binary_to_decimal("1100")) # ans: 12

# example 2
print(binary_to_decimal("1000")) # ans: 8