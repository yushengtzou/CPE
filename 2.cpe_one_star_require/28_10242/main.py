#  鄒雨笙 UVa Online Judge 2023/10/22

#  Problem 10242 - Fourth Point !!


while True:
    try:
        points = input().split()
        
        if len(points) != 8:
            continue

        points = [float(x) for x in points]

        x1, y1, x2, y2, x3, y3, x4, y4 = points

        if x1 == x3 and y1 == y3:
            x1, y1, x2, y2, x3, y3 = x2, y2, x3, y3, x4, y4
        elif x1 == x4 and y1 == y4:
            x1, y1, x2, y2 = x2, y2, x4, y4
        elif x2 == x3 and y2 == y3:
            x2, y2, x3, y3 = x3, y3, x4, y4
        elif x2 == x4 and y2 == y4:
            x2, y2 = x4, y4

        vector = (x1 - x2, y1 - y2)
        point4 = (x3 + vector[0], y3 + vector[1])

        print(f"{point4[0]:.3f} {point4[1]:.3f}")

    except EOFError:
        break
    except ValueError:
        continue


# while True:
#     try:
#         points = [float(x) for x in input().split()]
#         x1 = points[0]
#         y1 = points[1] 
#         x2 = points[2]
#         y2 = points[3] 
#         x3 = points[4]
#         y3 = points[5] 
#         x4 = points[6]
#         y4 = points[7] 
#         if x1 == x3 and y1 == y3:
#             x1 = x2
#             y1 = y2
#             x2 = x3
#             y2 = y3
#             x3 = x4
#             y3 = y4
#         elif x1 == x4 and y1 == y4:
#             x1 = x2
#             y1 = y2
#             x2 = x4
#             y2 = y4
#         elif x2 == x3 and y2 == y3:
#             x2 = x3
#             y2 = y3
#             x3 = x4
#             y3 = y4
#         elif x2 == x4 and y2 == y4:
#             x2 = x4
#             y2 = y4
#             
#         # point2 到 point1 的向量
#         vector = (x1 - x2, y1 - y2) 
#         point4 = (x3 + vector[0], y3 + vector[1])
#         print(f"{point4[0]:.3f} {point4[1]:.3f}")
#     
#
#     except EOFError:
#         break
