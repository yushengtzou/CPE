#  鄒雨笙 UVa Online Judge 2023/10/21

#  Problem 10812 - Beat the Spread!


n = int(input())

for _ in range(n):
    flag = 0
    s, d = map(int, input().split())
    a = (s + d) / 2
    if (s + d) % 2 != 0:
        flag = 1
    a = int(a)
    b = s - a
    a_max = max(a, b)
    b_min = min(a, b)
    if a_max < 0 or b_min < 0 or flag == 1:
        print("impossible")
    else:
        print(f"{a_max} {b_min}")


