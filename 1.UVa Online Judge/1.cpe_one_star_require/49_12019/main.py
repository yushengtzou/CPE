#  鄒雨笙 UVa Online Judge 2023/10/24

#  Problem 12019 - Doom's Day Algorithm


while True:
    a, b = map(int, input().split())
    
    if a == 0 and b == 0:
        break

    # Count of numbers whose squares are <= b
    upper_count = int(b ** 0.5)
    
    # Count of numbers whose squares are < a
    lower_count = int((a - 1) ** 0.5) 

    print(upper_count - lower_count)
