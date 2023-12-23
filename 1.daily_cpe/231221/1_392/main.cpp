// 鄒雨笙 20231220
// 392 Polynomial Showdown


#include <iostream>
using namespace std;


int main() {
    int c[9];
    int flag;
    while (cin >> c[8]) {
        flag = 1;
        for (int i = 7; i >= 0; --i)
            cin >> c[i];

        for (int i = 8; i >= 0; --i) {
            if (c[i] == 0)
                continue;
            
            if (flag == 1) {
                flag = 0;
                if (c[i] < 0)
                    cout << "-";
            }
            else {
                if (c[i] > 0)
                    cout << " + ";
                else
                    cout << " - ";
            }

            if (c[i] < 0)
                c[i] = -c[i];

            if (c[i] != 1 || i == 0)
                cout << c[i];

            if (i >= 2)
                cout << "x^" << i;
            else if (i == 1)
                cout << "x";
        }

        if (flag == 1)
            cout << c[0];

        cout << "\n";
    }

    return 0;
}



// #include <bits/stdc++.h>
// using namespace std;
//
// int main() {
//     string line;
//     string coeff;
//
//     while (getline(cin, line)) {
//         vector<int> coeffs;
//         stringstream ss(line);
//         while (getline(ss, coeff, ' ')) { 
//             coeffs.push_back(stoi(coeff));
//         }
//
//         int degree = coeffs.size() - 1;
//         string result = "";
//
//         for (int i = 0; i < coeffs.size(); ++i) {
//             if (coeffs[i] == 0) {
//                 degree--;
//                 continue;
//             }
//
//             if (!result.empty()) {
//                 result += (coeffs[i] > 0) ? " + " : " - ";
//             } else if (coeffs[i] < 0) {
//                 result += "-";
//             }
//
//             if (abs(coeffs[i]) != 1 || degree == 0) {
//                 result += to_string(abs(coeffs[i]));
//             }
//             if (degree > 1) {
//                 result += "x^" + to_string(degree);
//             } else if (degree == 1) {
//                 result += "x";
//             }
//             degree--;
//         }
//         bool allZero = true;
//         for (int coeff : coeffs) {
//             if (coeff != 0) {
//                 allZero = false;
//                 break;
//             }
//         }
//
//         if (allZero) {
//             cout << "0" << endl;
//         }
//         else
//             cout << result << endl;
//     }
// }
//
//
//
// // #include <bits/stdc++.h>
// // using namespace std;
// //
// // int main()
// // {
// //     string line;
// //     string coeff;
// //     vector<int> coeffs;
// //
// //     while (getline(cin, line)) {
// //         string result = "";
// //         stringstream ss(line);
// //         while (getline(ss, coeff, ' ')){ // 以' '做分割
// //                 coeffs.push_back(stoi(coeff));
// //         }
// //
// //         for (auto coeff : coeffs) {
// //             cout << coeff << endl;
// //         }
// //
// //         int degree = 8;
// //         for (auto coeff : coeffs) {
// //             if (coeff != 0 and coeff == 1) {
// //                 result += "x^" + to_string(degree);
// //                 result += " + ";
// //             }
// //             else if (coeff != 0 and coeff == 1) {
// //                 result += "x^" + to_string(degree);
// //                 result += " + ";
// //             }
// //             else if (coeff != 0 and coeff > 0) {
// //                 result += to_string(coeff) + "x^" + to_string(degree);
// //                 result += " + ";
// //             }
// //             else if (coeff != 0 and coeff < 0) {
// //                 result += to_string(coeff) + "x^" + to_string(degree);
// //                 result += " - ";
// //             }
// //             degree--;
// //         }
// //
// //         cout << result << endl;
// //
// //         // x^8 + x^7 + x^6 + x^5 + 22x^4 - 333x^3 + x^2 + x - 1
// //
// //     }
// //
// //
// // }
// //
