// 鄒雨笙 20231220
// 392 Polynomial Showdown



#include <bits/stdc++.h>
using namespace std;

int main()
{
    string line;
    string coeff;
    vector<int> coeffs;

    while (getline(cin, line)) {
        stringstream ss(line);
        while (getline(ss, coeff, ' ')){ // 以' '做分割
                coeffs.push_back(stoi(coeff));
        }

        for (auto coeff : coeffs) {
            cout << coeff << endl;
        }

        for (auto coeff : coeffs) {
            cout << coeff << endl;
        }
        " + "
        " - "


        x^8 + x^7 + x^6 + x^5 + 22x^4 - 333x^3 + x^2 + x - 1

    }


}

