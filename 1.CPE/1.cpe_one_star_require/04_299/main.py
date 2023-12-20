#  鄒雨笙 UVa Online Judge 2023/9/28

#  Problem 299 - Train Swapping


# def bubbleSort(train):
#     swapNum = 0
#     L = len(train)
#     for i in range(L - 1):
#         for j in range(L - i - 1):
#             if train[j] > train[j + 1]:
#                 train[j], train[j + 1] = train[j + 1], train[j]
#                 swapNum += 1
#     return swapNum
#
# N = int(input())
#
# for _ in range(N):  
#     L = int(input())
#     train = list(map(int, input().split()))
#
#     swapNum = bubbleSort(train)
#
#     print(f"Optimal train swapping takes {swapNum} swaps.")



def bubbleSort(train):
    swapNum = 0
    L = len(train)
    for i in range(L - 1):
        for j in range(L - i - 1):
            if train[j] > train[j + 1]:
                temp = train[j]
                train[j] = train[j + 1]
                train[j + 1] = temp
                swapNum += 1
                # print(swapNum)
    return swapNum

N = int(input())

for _ in range(N):  
    L = int(input())
    train = list(map(int, input().split()))

    swapNum = bubbleSort(train)

    print(f"Optimal train swapping takes {swapNum} swaps.")


