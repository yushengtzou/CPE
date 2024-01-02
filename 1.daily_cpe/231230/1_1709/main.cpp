// 鄒雨笙 20231230
// 1709 - Amalgamated Artichokes


#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;


double price(int p, int a, int b, int c, int d, int n) {
    double maxDecline = 0.0;
    double maxPrice = 0.0;

    for (int k = 1; k <= n; k++) {
        double currentPrice = p * (sin(a * k + b) + cos(c * k + d) + 2);
        
        if (currentPrice > maxPrice) {
            maxPrice = currentPrice;
        } else {
            maxDecline = max(maxDecline, maxPrice - currentPrice);
        }
    }

    return maxDecline;
}


// price(k) = p · (sin(a · k + b) + cos(c · k + d) + 2)
// double price(int p, int a, int b, int c, int d, int n) {
//     vector<double> record;
//     vector<double> declines;
//     double price, decline;
//     for (int k = 1; k <= n; k++) {
//         price = p * (double)(sin(a * k + b) + cos(c * k + d) + 2);
//         record.push_back(price);
//     }
//     for (auto it : record) {
//         cout << it << " ";
//     }
//     cout << endl;
//     // for (int i = 0; i < record.size()-1; i++) {
//     //     decline = record[i+1] - record[i];
//     //     declines.push_back(decline);
//     // }
//     // sort(declines.begin(), declines.end());
//     // return declines[0];
// }


int main() {
    int p, a, b, c, d, n;
    while (cin >> p >> a >> b >> c >> d >> n) {
        double decline = price(p, a, b, c, d, n);
        cout << fixed << setprecision(9) << decline << endl;
    }
}


// int main() {
//     int p, a, b, c, d, n;
//     while (cin >> p >> a >> b >> c >> d >> n) {
//         // cout << price(p, a, b, c, d, n) << endl;
//         price(p, a, b, c, d, n);
//         // cout.precision(2);
//         // cout << fixed << love << endl; 
//     }
// }
//
