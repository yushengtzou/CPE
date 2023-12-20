#  鄒雨笙 UVa Online Judge 2023/9/3

#  Problem 10929: You can say 11 


while True:
    N = input()
    if N == "0":
        break

    even_sum = 0
    odd_sum = 0
    for i in range(0, len(N), 2):
        even_sum += int(N[i])
    for i in range(1, len(N), 2):
        odd_sum += int(N[i])

    if abs(odd_sum - even_sum) % 11 == 0:
        print(f"{N} is a multiple of 11.")
    else:
        print(f"{N} is not a multiple of 11.")


# results = []
#
# while True:
#     N = int(input())
#     if N == 0:
#         break
#     if N % 11 == 0:
#         result = "{} is a multiple of 11.".format(N)
#     else:
#         result = "{} is not a multiple of 11.".format(N)
#     print(result)
    # results.append(result)

# End of while loop

# for result in results:
    # print(result)

