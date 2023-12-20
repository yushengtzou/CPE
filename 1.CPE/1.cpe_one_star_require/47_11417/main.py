#  鄒雨笙 UVa Online Judge 2023/10/10

#  Problem 11417 - GCD


def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return a

memo = {}  # A dictionary to store precomputed GCDs

while True:
    G = 0
    N = int(input())

    if N == 0:
        break
    else:
        for i in range(1, N):
            for j in range(i + 1, N + 1):
                if (i, j) not in memo:  # If GCD not computed before
                    memo[(i, j)] = gcd(i, j)
                G += memo[(i, j)]  # Use the precomputed/stored value
        print(G)


