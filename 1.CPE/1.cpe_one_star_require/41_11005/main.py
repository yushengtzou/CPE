#  鄒雨笙 UVa Online Judge 2023/10/4

#  Problem 11005 - Cheapest Base


T = int(input())

for c in range(1, T + 1):  
    mp = []
    for _ in range(4):
        mp.extend(map(int, input().split()))

    Q = int(input())
    print(f"Case {c}:")

    for _ in range(Q):
        n = int(input())
        mi = 0x7FFFFFFF
        values = [0] * 37  # Reinitialize for each Q

        for base in range(2, 37):
            temp = n
            summation = 0
            while temp > 0:
                summation += mp[temp % base]
                temp //= base
            mi = min(mi, summation)
            values[base] = summation

        cheapest_bases = [str(i) for i in range(2, 37) if values[i] == mi]
        print(f"Cheapest base(s) for number {n}: {' '.join(cheapest_bases)}")

    if c != T:
        print()




# value = {}
#
#
# T = int(input())
#
# for c in range(T):  
#     mp_1 = list(map(int, input().split()))
#     mp_2 = list(map(int, input().split()))
#     mp_3 = list(map(int, input().split()))
#     mp_4 = list(map(int, input().split()))
#     mp = mp_1 + mp_2 + mp_3 + mp_4 
#     Q = int(input())
#     print(f"Case {c + 1}:")
#     
#     while Q > 0:
#         Q -= 1
#         n = int(input())
#         mi = 0x7FFFFFFF
#         for base in range(2, 37):
#             temp = n
#             summation = 0
#             while temp > 0:
#                 summation += mp[temp%base]
#                 temp //= base
#             mi = min(mi, summation)
#             value[base] = summation
#
#         print(f"Cheapest base(s) for number {n}:", end = "")
#         for i in range(2, 37):
#             if value[i] == mi:
#                 print(f" {i}")
#         
#         value.clear()
#         if c != T:
#             print()
#
#
#
#
