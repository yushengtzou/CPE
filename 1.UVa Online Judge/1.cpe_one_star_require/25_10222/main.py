#  鄒雨笙 UVa Online Judge 2023/9/29

#  Problem 10222 - Decode the Mad man



alphabet =	{
  "e": "q",
  "r": "w",
  "t": "e",
  "y": "r",
  "u": "t",
  "i": "y",
  "o": "u",
  "p": "i",
  "[": "o",
  "]": "p",
  "d": "a",
  "f": "s",
  "g": "d",
  "h": "f",
  "j": "g",
  "k": "h",
  "l": "j",
  "r": "w",
  ";": "k",
  "'": "l",
  "c": "z",
  "v": "x",
  "b": "c",
  "n": "v",
  "m": "b",
  ",": "n",
  ".": "m",
}

sentence_ori = input().lower()
sentence = []

for char in sentence_ori:
    if alphabet.get(char) != None:
        sentence.append(alphabet.get(char))
    else:
        sentence.append(" ")

for char in sentence:
    print(char, end = "")

print()





