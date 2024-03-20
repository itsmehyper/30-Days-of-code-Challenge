# Day 11 of 30 Days 👾

from datetime import datetime

def calculate_age(dob):
    birth_date = datetime.strptime(dob, "%d-%m-%Y").date()
    current_date = datetime.now().date()

    delta = current_date - birth_date

    years = delta.days // 365
    months = (delta.days % 365) // 30
    days = (delta.days % 365) % 30

    return [days, months, years]

# Example 1
print(calculate_age("10-07-2023"))  # Output Format: [14, 8, 0]

# Example 2
print(calculate_age("12-11-1993"))  # Output Format: [16, 4, 30]