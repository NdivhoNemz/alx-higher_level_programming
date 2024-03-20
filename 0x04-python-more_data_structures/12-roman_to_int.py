#!/usr/bin/python3

def roman_to_int(roman_string: str) -> int:
    if not roman_string or not isinstance(roman_string, str):
        return 0

    data = {'I': 1, 'V': 5, 'X': 10, 'L': 50, 'C': 100, 'D': 500, 'M': 1000}
    numbers = [data.get(x, 0) for x in roman_string] + [0]
    rep = 0

    for current, next_num in zip(numbers, numbers[1:]):
        if current >= next_num:
            rep += current
        else:
            rep -= current

    return rep
