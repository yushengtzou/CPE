#  鄒雨笙 UVa Online Judge 2023/10/19

#  Problem 10050 - Hartals


T = int(input())

while T > 0:
    N = int(input())
    P = int(input())
    days = [0] * N
    # print(days)
    for _ in range(P):
        h = int(input())
        for i in range(len(days)):
            if (i + 1) % h == 0:
                days[i] = 1
    # print(days)
    for i in range(len(days)):
        if i + 1 == 6 or i + 1 == 7:
            days[i] = 0
        elif (i + 1 - 13) % 7 == 0 or (i + 1) % 7 == 0:
            days[i] = 0
    # print(days)
    result = days.count(1)
    print(result)
    T -= 1
