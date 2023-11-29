#  鄒雨笙 UVa Online Judge 2023/9/28

#  Problem 10783 - Odd Sum


T = int(input())

case = 1
for _ in range(T):  
    a = int(input())
    b = int(input())

    if a % 2 == 0:
        a += 1
    else:
        pass 
    if b % 2 == 0:
        b -= 1
    else:
        pass

    oddNum = []
    iterate = int((b - a) / 2 + 1)

    for i in range(iterate):
        oddNum.append(a)
        a += 2

    # print(oddNum)

    oddSum = 0
    for num in oddNum:
        oddSum += num

    print(f"Case {case}: {oddSum}")
    case += 1



