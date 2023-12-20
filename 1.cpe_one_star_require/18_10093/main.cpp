#  鄒雨笙 UVa Online Judge 2023/10/5

#  Problem 10093 - An Easy Problem!

def main():
    while True:
        try:
            s = input()
        except EOFError:
            break
        
        total = 0
        mx = 1

        for char in s:
            if '0' <= char <= '9':
                temp = ord(char) - ord('0')
            elif 'A' <= char <= 'Z':
                temp = ord(char) - ord('A') + 10
            elif 'a' <= char <= 'z':
                temp = ord(char) - ord('a') + 36
            else:
                continue

            if mx < temp:
                mx = temp
            total += temp

        for i in range(mx, 62):
            if total % i == 0:
                print(i + 1)
                break
        else:
            print("such number is impossible!")

if __name__ == '__main__':
    main()

