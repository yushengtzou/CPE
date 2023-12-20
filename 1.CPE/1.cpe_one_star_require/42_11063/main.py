#  鄒雨笙 UVa Online Judge 2023/10/9

#  Problem 11063 - B2-Sequence


case = 1
while True:
	try:
		if case > 1:
			input()
		input()
		a = list(map(int, input().split()))
	except EOFError:
		break

	c = 1
	b = []
	for i in range(len(a)):
		if i > 0 and a[i] <= a[i-1]:
			c = 0
			break
		elif a[i] < 1:
			c = 0
			break

		for j in range(i, len(a)):
			k = a[i] + a[j]
			if k not in b:
				b.append(k)
			else:
				c = 0
				break

	if c == 1:
		print("Case #{}: It is a B2-Sequence.".format(case))
	else:
		print("Case #{}: It is not a B2-Sequence.".format(case))
	print("")
	case += 1


# case = 1 
#
# while True:
#     try:
#         N = int(input())
#         sequence = list(map(int, input().split()))
#         # print(sequence)
#
#     except EOFError:
#         break
#
#     numSum = []
#     for i in range(N - 1):
#         for j in range(N - 1 - i):
#             summation = sequence[i] + sequence[j + 1 + i]
#             numSum.append(summation)
#
#     # print(numSum)
#
#     identical = False
#     for i in range(N - 1):
#         for j in range(N - 1 - i):
#             if numSum[i] == numSum[j + 1 + i]:
#                 identical = True
#                 break
#
#     if identical == False:
#         print(f"Case #{case}: It is a B2-Sequence.")
#     else:
#         print(f"Case #{case}: It is not a B2-Sequence.")
#
#     print()
#     case += 1
#
