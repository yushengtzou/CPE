#  鄒雨笙 UVa Online Judge 2023/10/5

#  Problem 11349 - Symmetric Matrix


T = int(input())
for case in range(T):
    n = int(input().split(" = ")[1])
    M = [] 
    # 輸入矩陣內元素的值
    for i in range(n):
        M.append(list(map(int, input().split())))

    is_Symmetric = True
    center = n // 2
    for i in range(n):
        for j in range(i+1):
            if M[i][j] < 0 or M[n - 1 - i][n - 1 - j] < 0:
                is_Symmetric = False
                break
            if M[i][j] != M[n - 1 - i][n - 1 - j]:
                is_Symmetric = False
                break
        if is_Symmetric is False:
            break

    if is_Symmetric:
        print(f"Test #{case+1}: Symmetric.")
    else:
        print(f"Test #{case+1}: Non-symmetric.")




