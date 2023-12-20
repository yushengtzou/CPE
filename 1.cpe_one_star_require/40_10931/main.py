#  鄒雨笙 UVa Online Judge 2023/10/3

#  Problem 10931 - Parity


while True:
    I = input()
    if I == "0": break
    I_dec_bin = bin(int(I))
    b_1 = I_dec_bin.count('1')

    print(f"The parity of {I_dec_bin} is {b_1} (mod 2).")


