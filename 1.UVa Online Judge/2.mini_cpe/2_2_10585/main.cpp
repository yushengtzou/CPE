//  鄒雨笙 UVa Online Judge 2023/10/31
//
//  Problem 10585 - Center of symmetry


#include<iostream>
#include<vector>
#include<map>
using namespace std;

int main() {

    int c, n, x, y;
    int xImage, yImage;
    cin >> c;
    for (int i = 0; i < c; i++) {
        cin >> n;
        int sumX = 0; 
        int sumY = 0;
        vector<pair<int, int>> coordinates;
        
        for (int j = 0; j < n; j++) {
            cin >> x >> y;
            coordinates.push_back({x, y});
        }
        
        for (auto coordinate : coordinates) {
            sumX += coordinate.first;
            sumY += coordinate.second;
        }
        
        int cx = sumX / n;
        int cy = sumY / n;

        bool allSymmetric = true;
        for (auto coordinate : coordinates) {
            xImage = 2 * cx - coordinate.first;
            yImage = 2 * cy - coordinate.second;
            bool isSymmetric = false;
            for (auto checkCoordinate : coordinates) {
                if (xImage == checkCoordinate.first and yImage == checkCoordinate.second) {
                    isSymmetric = true;
                    break;
                }
            }
            if (!isSymmetric) {
                allSymmetric = false;
                break;
            }
        }

        if (allSymmetric) {
            cout << "yes" << endl;
        }
        else {
            cout << "no" << endl;
        }
    }

    return 0;
}


