#  鄒雨笙 UVa Online Judge 2023/9/19

#  Problem 948 - Fibonaccimal Base

'''

dec_base = fib_base
1  = 1 (fib)
2  = 10 (fib)
3  = 100 (fib)
4  = 101 (fib)
5  = 1000 (fib)
6  = 1001 (fib)
7  = 1010 (fib)
8  = 10000 (fib)
9  = 10001 (fib)
10 = 10010 (fib)

e.g.

17         = 1  0 0 1 0 1
13 + 3 + 1 = 13 8 5 3 2 1

'''


fib = [1, 1]

while fib[-2] + fib[-1] <= 100:
    fib.append(fib[-2] + fib[-1])

fibSize = len(fib) - 1
# print(fibSize)

N = int(input())
for _ in range(N):
    num = int(input())
    print(f"{num} = ", end="")
    print()
    ans = ""
    for j in range(fibSize, 0, -1):
        temp = fib[j]
        print(temp)
        if temp > num or num == 0:
            ans += "0"
            print(f"ans = {int(ans)}, True")
        else:
            ans += "1"
            num -= temp
            print(f"ans = {int(ans)}, False")
    print(f"{int(ans)} (fib)")


