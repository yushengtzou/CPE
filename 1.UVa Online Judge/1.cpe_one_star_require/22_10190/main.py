# 鄒雨笙 UVa Online Judge 2023/10/12
# Problem 10190 - Divide, But Not Quite Conquer!


while True:
    try:
        n, m = map(int, input().split())
        numList = []
        flagBoring = False

        if n < 2 or m < 2:
            print("Boring!")
            continue
        
        numList.append(str(n))

        while n != 1:
            if n % m != 0:
                flagBoring = True
                break
            n = n // m
            numList.append(str(n))

        if flagBoring:
            print("Boring!")
        else:
            print(" ".join(numList))

    except EOFError:
        break


