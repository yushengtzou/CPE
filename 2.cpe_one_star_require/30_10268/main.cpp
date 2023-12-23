// 鄒雨笙 UVa Online Judge 2023/9/4

// Problem 10268: 498-bis 


while True:
    try:
        x = int(input())  
        coefficients = list(map(int, input().strip().split()))
        n = len(coefficients) - 1
        value = 0
        for i in coefficients:
            value += i * n * pow(x, n - 1)
            n -= 1

        value = int(value)
        print(value)

    except:
        break

# end of while loop

