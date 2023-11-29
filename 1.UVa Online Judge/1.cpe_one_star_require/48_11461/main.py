#  鄒雨笙 UVa Online Judge 2023/10/5

#  Problem 11461 - Square Numbers


while True:
    a, b = map(int, input().split())
    
    if a == 0 and b == 0:
        break

    # Count of numbers whose squares are <= b
    upper_count = int(b ** 0.5)
    
    # Count of numbers whose squares are < a
    lower_count = int((a - 1) ** 0.5) 

    print(upper_count - lower_count)



# while True:
#     num = 0
#     pair = list(map(int, input().split()))
#     if len(pair) != 2:
#         break
#     a = pair[0]
#     b = pair[1]
#     if a == 0 and b == 0:
#         break
#
#     for i in range(a, b + 1):
#         squar = i ** 0.5
#         if squar.is_integer():
#             num += 1
#     print(num)
#     pair.clear()





