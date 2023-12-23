#  鄒雨笙 UVa Online Judge 2023/10/11

#  Problem 10062 - Tell me the frequencies!


count = 0
while True:
    try:
        dic = {}
        string = input()
        if count != 0: print()
        for c in string:
            if ord(c) not in dic.keys():
                dic[ord(c)] = 1
            else:
                dic[ord(c)] += 1
        for k, v in sorted(dic.items(), key = lambda x:(x[1], -x[0])):
            print(k, v)
        count += 1
    except:
        break


