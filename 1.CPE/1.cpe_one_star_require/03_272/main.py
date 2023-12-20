#  鄒雨笙 UVa Online Judge 2023/9/11

#  Problem 272 - TEX Quotes 


flag = 1

while True:
    try:
        sentence = input()
        new_sentence = ""
        for char in sentence:
            if char == "\"" and flag % 2 != 0:
                new_sentence += "``"
                flag += 1
            elif char == "\"" and flag % 2 == 0:
                new_sentence += "''"
                flag += 1
            else:
                new_sentence += char

        print(new_sentence)

    except EOFError:
        break


