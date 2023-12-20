#  鄒雨笙 UVa Online Judge 2023/9/21

#  Problem 10035 - Primary Arithmetic


while True:
    carry = 0
    a, b = input().split()

    if a == '0' and b == '0':
        break

    # Check if a and b are integers

    # Padding the numbers with zeros so they have equal length
    len_diff = len(a) - len(b)
    if len_diff > 0:
        b = '0' * len_diff + b
    elif len_diff < 0:
        a = '0' * (-len_diff) + a

    carry_over = 0
    for digit_1, digit_2 in zip(reversed(a), reversed(b)):
        digit_1 = int(digit_1)
        digit_2 = int(digit_2)
        sumOfDigit = digit_1 + digit_2 + carry_over
        if sumOfDigit >= 10:
            carry += 1
            carry_over = sumOfDigit // 10
        else:
            carry_over = 0

    if carry == 0:
        print(f"No carry operation.")
    elif carry == 1:
        print(f"{carry} carry operation.")
    else:
        print(f"{carry} carry operations.")

