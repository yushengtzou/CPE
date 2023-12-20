


while True:
    try:
        x = int(input())
        formula = [int(x) for x in input().split()]
        del formula[-1]
        if formula:
            exponent = len(formula)
            answer = 0
            for coefficient in formula: 
                answer *= answer
                answer += exponent * coefficient
                exponent -= 1
            print(answer)

    except EOFError:
        break
