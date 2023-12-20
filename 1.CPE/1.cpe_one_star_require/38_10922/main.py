#  鄒雨笙 UVa Online Judge 2023/10/11

#  Problem 10922 - 2 the 9s


def checkMultiple(N):
    degree = 1
    listN = list(map(int, N))
    numSum = sum(listN)

    while numSum > 9 and numSum % 9 == 0:
        degree += 1
        listN = [int(x) for x in str(numSum)]
        numSum = sum(listN)

    return degree, numSum



while True:
    flag = False

    N = input()
    if N == "0":
        break

    degree, numSum = checkMultiple(N)

    if numSum % 9 == 0:
        print(f"{N} is a multiple of 9 and has 9-degree {degree}.")
    else:
        print(f"{N} is not a multiple of 9.")


