# Day 15 of 30 Days 👾

def generate_hex_code(red, green, blue):
    return f"#{red:02X}{green:02X}{blue:02X}"


# examples
print(generate_hex_code(0, 0, 255)) # #0000FF
print(generate_hex_code(255, 255, 255)) # #FFFFFF