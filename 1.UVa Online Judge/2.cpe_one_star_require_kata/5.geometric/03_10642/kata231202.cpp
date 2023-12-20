//  鄒雨笙 UVa Online Judge 2023/12/02
//
//  Problem 10642 - Can You Solve It?


#include<iostream>
#include<vector>
using namespace std;


int calculateDist(int x, int y) {
    int layer = x + y;
    int pointsBeforeLayer = 0;
    int pointsInLayer = x + 1;
    int totalPoints;

    for (int i = 1; i <= layer; i++) {
        pointsBeforeLayer += i;
    }

    totalPoints = pointsBeforeLayer + pointsInLayer;
    return totalPoints;

}


int main() {
    int n, x1, y1, x2, y2;
    int result;
    int distToPoint1, distToPoint2;

    cin >> n;

    for (int i = 1; i <= n; i++) {
        cin >> x1 >> y1 >> x2 >> y2;
        distToPoint1 = calculateDist(x1, y1);
        distToPoint2 = calculateDist(x2, y2);

        result = distToPoint2 - distToPoint1;

        cout << "Case " << i << ": " << result << endl;
    }

}
