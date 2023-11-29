#  鄒雨笙 UVa Online Judge 2023/10/11

#  Problem 10420 - List of Conquests



n = int(input())

lady_dict = {}

for _ in range(n):
    country, first_name, last_name = input().split()
    name = first_name + last_name

    # Check if country key exists, if not create an empty list for it
    if country not in lady_dict:
        lady_dict[country] = []

    lady_dict[country].append(name)

result = {}

for k in lady_dict:
    result[k] = len(lady_dict[k])
    # print(k)

result = sorted(result.items(), key = lambda x:(x[0]))

for k, v in result:
    print(f"{k} {v}")

# print(result)
# print(lady_dict)


