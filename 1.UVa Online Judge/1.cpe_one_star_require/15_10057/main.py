#  鄒雨笙 UVa Online Judge 2023/10/20

#  Problem 10057 - A mid-summer night's dream


while True:
    try:
        n = int(input())
        nums = []
        for num in range(n):
            num = int(input())
            nums.append(num)
        # print(nums)
        nums.sort()
        # print(nums)
        if n % 2 == 0:
            mid1 = int(n / 2)
            mid2 = mid1 + 1
            mid1Num = nums[mid1 - 1]
            mid2Num = nums[mid2 - 1]
            if mid1Num == mid2Num:
                satisfyNum = nums.count(mid1Num)
            else:
                satisfyNum = nums.count(mid1Num) + nums.count(mid2Num)
            otherA = nums[mid2 - 1] - nums[mid1 - 1] + 1
            print(f"{mid1Num} {satisfyNum} {otherA}")
        else:
            mid1 = int((n + 1) / 2)
            mid1Num = nums[mid1 - 1]
            satisfyNum = nums.count(mid1Num)
            otherA = 1
            print(f"{mid1Num} {satisfyNum} {otherA}")


    except EOFError:
        break
