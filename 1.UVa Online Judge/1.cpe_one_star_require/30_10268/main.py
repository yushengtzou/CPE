#  鄒雨笙 UVa Online Judge 2023/9/4

#  Problem 10268: 498-bis 


# while True:
#     try:
#         x = int(input())
#         A = list(map(int, input().strip().split()))
#         ans = 0
#         n = len(A) - 1
#         for i in range(n):
#             ans += A[i] * (n-i) * pow(x, n-1-i)
#         print(int(ans))
#     except:
#         break



while True:
    try:
        x = int(input())
        # formula = [int(x) for x in input().split()]
        formula = list(map(int, input().split()))
        del formula[-1]  # Constant will be gone after differential
        if formula:
            # We have value other than constant
            exponent = len(formula)  # Get the highest exponent
            answer = 0
            # Horner's method
            # i.e. 2 * x^3 + x^2 + x + 2 = ((2 * x + 1) * x + 1) * x + 2
            for coefficient in formula:
                answer *= x    # 為什麼是這樣寫？
                answer += coefficient * exponent
                exponent -= 1
            print(answer)
        else:
            # Only constant
            print(0)
    except EOFError:
        break


# while True:
#     try:
#         x = int(input())
#         coefficients = list(map(int, input().strip().split()))
#         n = len(coefficients) - 1
#         value = 0
#         for i in coefficients:
#             value += i * n * pow(x, n - 1)
#             n -= 1
#
#         value = int(value)
#         print(value)
#
#     except:
#         break
#
# # end of while loop

