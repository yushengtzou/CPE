// 鄒雨笙 UVa Online Judge 2023/12/12
//
// Problem 10193 - All You Need Is Love
//
//  解題想法： S1, S2 都要是 L 的公倍數，題目未給定 L ，所以
//  S1, S2 只要有公因數即可


#include <iostream>
#include <bitset>
using namespace std;


unsigned long long binaryToInteger(const string& binaryString) {
    return bitset<64>(binaryString).to_ullong(); 
}


int gcd(int p, int q) {
    if (p < q)
        return gcd(q, p);
    if (q == 0)
        return p;
    return gcd(q, p % q);
}


int main() {
    int N;
    string S1, S2;
    cin >> N;

    for (int c = 1; c <= N; c++) {
        cin >> S1;
        cin >> S2;

        long long int1 = binaryToInteger(S1);
        long long int2 = binaryToInteger(S2);

        if (gcd(int1, int2) > 1)
            cout << "Pair #" << c << ": All you need is love!" << endl;
        else
            cout << "Pair #" << c << ": Love is not all you need!" << endl;

    }

}
