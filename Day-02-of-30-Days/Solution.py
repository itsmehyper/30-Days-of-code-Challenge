# Day 02 of 30 Days 👾

import math
def decide_category(data):
    if data < 18.5:
         return "Underweight"
    elif 18.5 <= data <= 24.9:
         return "Healthy"
    elif 25.0 <= data <= 29.9:
         return "Overweight"
    else:
         return "Obesity"
    
def calculate_bmi(height, weight):
     if height == 0 or weight == 0:
          print("Invalid Input")
          exit(0)
     bmi = weight / math.pow(height/100, 2)
     return {round(bmi*100)/100.0, decide_category(bmi)}

# Example 1
print(calculate_bmi(157.48, 46))