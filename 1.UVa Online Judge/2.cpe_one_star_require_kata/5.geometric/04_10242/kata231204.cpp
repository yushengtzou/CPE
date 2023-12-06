//  鄒雨笙 UVa Online Judge 2023/12/04
//
//  Problem 10242 - Fourth Point !!


#include <iostream>
#include <string>
using namespace std;


int main() {
    string line;
    double x1, y1, x2, y2, x3, y3, x4, y4;

    while (cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4) {

        // Identifying the common point and adjusting the coordinates
        if (x1 == x3 && y1 == y3) {
            swap(x1, x2);
            swap(y1, y2);
            swap(x3, x4);
            swap(y3, y4);
        } else if (x1 == x4 && y1 == y4) {
            swap(x1, x2);
            swap(y1, y2);
        } else if (x2 == x3 && y2 == y3) {
            swap(x2, x3);
            swap(y2, y3);
            swap(x3, x4);
            swap(y3, y4);
        } else if (x2 == x4 && y2 == y4) {
            swap(x2, x4);
            swap(y2, y4);
        }

        // Calculating the fourth point of the parallelogram
        double dx = x3 + (x1 - x2);
        double dy = y3 + (y1 - y2);

        cout.precision(3);
        cout << fixed << dx << " " << dy << endl;
    }

    return 0;
}

