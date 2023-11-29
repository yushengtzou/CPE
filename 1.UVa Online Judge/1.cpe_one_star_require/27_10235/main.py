#  鄒雨笙 UVa Online Judge 2023/9/28

#  Problem 10235 - Simply Emirp


# 使用 sieve of Eratosthenes 演算法
def isPrime(n):
    for i in range(2, int(n ** 0.5) + 1):
        if n % i == 0: return False
    return True


while True:
    try:
        N = int(input())
        invertN = int(str(N)[::-1])

        if isPrime(N) and isPrime(int(str(N)[::-1])) and N != int(str(N)[::-1]):
            print(f"{N} is emirp.")
        elif isPrime(N) != True:
            print(f"{N} is not prime.")
        else:
            print(f"{N} is prime.")

    except EOFError:
        break




