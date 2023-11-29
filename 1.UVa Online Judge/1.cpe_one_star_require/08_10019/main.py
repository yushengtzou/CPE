#  鄒雨笙 UVa Online Judge 2023/9/21

#  Problem 10019 - Funny Encryption Method


n = int(input())

for _ in range(n):
    M = input()
    
    M_dec_bin = bin(int(M))
    # print(f"{M_dec_bin}")
    b_1 = M_dec_bin.count('1')
    # print(f"{b_1}")

    M_hex_bin = bin(int(M, 16))
    # print(f"{M_hex_bin}")
    b_2 = M_hex_bin.count('1')
    # print(f"{b_2}")

    # 列印出結果
    print(f"{b_1} {b_2}")





