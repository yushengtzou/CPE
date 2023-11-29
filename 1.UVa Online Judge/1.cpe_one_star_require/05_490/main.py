#  鄒雨笙 UVa Online Judge 2023/9/18

#  Problem 490 - Rotating Sentences


sentences = []

try:
    while True:
        sentence = input()
        sentence_list = list(sentence)
        sentences.append(sentence_list)
except EOFError:
    pass

# Determine the maximum length of the sentences
# 有沒有其他更易懂的寫法
max_length = max(len(s) for s in sentences)

# 列印出字元 
# 以下的寫法真是簡潔，可以自己再寫一次，看看可不可以寫出來
for i in range(max_length):
    for sentence in reversed(sentences):
        # Check if current index is within sentence length
        if i < len(sentence):  
            print(sentence[i], end='')
        else:  
            # If the current sentence doesn't have a character at this index, print a space
            print(' ', end='')
    # 換到下一行
    print()


