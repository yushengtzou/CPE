#  鄒雨笙 UVa Online Judge 2023/10/6

#  Problem 10056 - What is the Probability?


def main():
    S = int(input())
    for _ in range(S):
        N, p, K = map(float, input().split())
        p = float(p)
        if p == 0:
            print("0.0000")
            continue
        first = (1.0 - p) ** (K - 1) * p
        r = (1.0 - p) ** N
        print(f"{first / (1.0 - r):.4f}")

if __name__ == "__main__":
    main()



