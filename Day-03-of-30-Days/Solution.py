# Day 03 of 30 Days 👾

def is_leap_year(year):
    if year % 400 == 0:
        return True
    elif year % 4 == 0 and year % 100 != 0:
        return True
    else:
        return False

# Example
print(is_leap_year(2016))