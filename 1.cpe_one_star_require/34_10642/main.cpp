// 鄒雨笙 UVa Online Judge 2023/10/19
//
// Problem 10642 - Can You Solve It?


#include<iostream>
using namespace std;


int totalPointsFromOrigin(int x, int y) {
    int level;
    int pointsCountFromRight;
    int totalPointsFromOrigin;

    level = x + y;
    pointsCountFromRight = x + 1;
    totalPointsFromOrigin = (1 + level) * level / 2 + pointsCountFromRight; 

    return totalPointsFromOrigin;

}


int main() {
    int n;
    int x1, y1, x2, y2;
    int pointsFromFirstPoint;
    int pointsFromSecondPoint;
    int steps;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x1 >> y1 >> x2 >> y2;
        pointsFromFirstPoint = totalPointsFromOrigin(x1, y1);
        pointsFromSecondPoint = totalPointsFromOrigin(x2, y2);
        steps = pointsFromSecondPoint - pointsFromFirstPoint;
        // cout << "pointsFromFirstPoint: " << pointsFromFirstPoint << endl;
        // cout << "pointsFromSecondPoint: " << pointsFromSecondPoint << endl;
        cout << "Case " << i + 1 << ": " << steps << endl;


    }

    return 0;

}
