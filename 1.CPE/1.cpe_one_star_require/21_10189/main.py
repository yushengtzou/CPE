#  鄒雨笙 UVa Online Judge 2023/9/6

#  Problem 10189 - Minesweeper 


def calculateTheValue(Matrix, i, j):
    directions = [(-1, -1), (-1, 0), (-1, 1), (0, -1), (0, 1), (1, -1), (1, 0), (1, 1)]
    value = 0

    for dx, dy in directions:
        x, y = i + dx, j + dy
        if 0 <= x < len(Matrix) and 0 <= y < len(Matrix[0]) and Matrix[x][y] == "*":
            value += 1

    return value

times = 1
first = True

while True:
    try:
        n, m = map(int, input().split())
        if n == 0 and m == 0:
            break

        # Add newline between test cases but not before the first one
        if first:
            first = False
        else:
            print()

        Matrix = []
        for i in range(n):
            row = input().strip()
            Matrix.append(list(row))

        print("Field #{}:".format(times))
        for i in range(n):
            for j in range(m):
                if Matrix[i][j] == "*":
                    print("*", end='')
                else:
                    print(calculateTheValue(Matrix, i, j), end='')
            print()
        times += 1

    except EOFError:
        break


