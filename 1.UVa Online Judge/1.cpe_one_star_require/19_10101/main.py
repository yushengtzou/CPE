#  鄒雨笙 UVa Online Judge 2023/10/9

#  Problem 10101 - Bangla Numbers


# 這支程式用遞迴的方式實作，方法相當高明，令人嘆為觀止
def bangla(num):
    if num >= 10000000:
        bangla(num // 10000000)
        print(" kuti", end="")
        num %= 10000000
    if num >= 100000:
        bangla(num // 100000)
        print(" lakh", end="")
        num %= 100000
    if num >= 1000:
        bangla(num // 1000)
        print(" hajar", end="")
        num %= 1000
    if num >= 100:
        bangla(num // 100)
        print(" shata", end="")
        num %= 100
    if num:
        print(f" {num}", end="")


countCase = 0
while True:
    try:
        num = int(input())
        countCase += 1
        print(f"{countCase:4}.", end="")
        if num:
            bangla(num)
        else:
            print(" 0", end="")
        print()
    except EOFError:
        break




