#  鄒雨笙 UVa Online Judge 2023/9/28

#  Problem 10041 - Vito's Family


N = int(input())

for _ in range(N):  
    rAndStreetNum_ori = input().split()
    rAndStreetNum = [int(num) for num in rAndStreetNum_ori]
    r = rAndStreetNum[0] 
    streetNum = rAndStreetNum[1:] 

    streetNum.sort() 
    mid = streetNum[r//2]
    distanceSum = 0
    for i in streetNum:
        distanceSum += abs(i - mid)

    print(distanceSum)




