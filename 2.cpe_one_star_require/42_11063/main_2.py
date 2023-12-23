


case = 0
while True:
    try:
        N = int(input())
        a = list(map(int, input().split()))

    except EOFError:
        break

    c = 1
    b = []
    for i in range(N):
        if i > 0 and a[i] <= a[i - 1]:
            c = 0
            break
        elif a[i] < 1:
            c = 0
            break

        for j in range(i, N):
            k = a[i] + a[j]
            if k not in b:
                b.append(k)
            else:
                c = 0
                break


