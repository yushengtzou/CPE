#  鄒雨笙 UVa Online Judge 2023/10/7

#  Problem 10193 - All You Need Is Love


import math

def solve(s, l):
    s, l = int(s, 2), int(l, 2)
    if math.gcd(s, l) > 1:
        return 'All you need is love!'
    return 'Love is not all you need!'

T = int(input())
for t in range(T):
    s = input()
    l = input()
    print(f'Pair #{t+1}: {solve(s, l)}')



# # Greatest Commom Divisor
# def mygcd(x, y):
#     # 這個演算法要熟
#     while y != 0:
#         x, y = y, x % y
#     return x
#
# N = int(input())
# for Case in range(1, N+1):
#     S1, S2 = input().split()
#     
#     n1 = int(S1, 2)
#     n2 = int(S2, 2)
#
#     print(f"Pair #{Case}", end=": ")
#     if mygcd(n1, n2) > 1:
#         print("All you need is love!")
#     else:
#         print("Love is not all you need!")
#
