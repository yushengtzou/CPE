#  鄒雨笙 UVa Online Judge 2023/9/20

#  Problem 10008 - What's Cryptanalysis?


from collections import Counter


n = int(input())
sentences = ""

for _ in range(n):
    temp = input().lower()
    sentences += temp

letter_frequency = Counter(sentences)
# print(letter_frequency)

alphabet = 'abcdefghijklmnopqrstuvwxyz'

letter_tuples = []

for letter in alphabet:
    if letter in letter_frequency:
        letter_tuples.append((letter, letter_frequency[letter]))

def get_frequency(tuple_element):
    return tuple_element[1]

sorted_letters = sorted(letter_tuples, key=get_frequency, reverse=True)

for letter, freq in sorted_letters:
    print(f"{letter.upper()} {freq}")



