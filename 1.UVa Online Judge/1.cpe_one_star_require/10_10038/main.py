#  鄒雨笙 UVa Online Judge 2023/9/26

#  Problem 10038 - Jolly Jumpers


while True:
    try:
        numbers_as_strings = input().split()
        numbers = [int(num_str) for num_str in numbers_as_strings]
        # Assuming the first number tells the count of the next numbers
        n = numbers[0]  
        numbers = numbers[1:]

        if n == 1:  # A single number is always jolly
            print("Jolly")
            continue

        numDiff = []
        for i in range(n - 1):
            numDiff.append(abs(numbers[i] - numbers[i+1]))

        numDiff.sort()

        if numDiff == list(range(1, n)):
            print("Jolly")
        else:
            print("Not jolly")

    except EOFError:
        break

