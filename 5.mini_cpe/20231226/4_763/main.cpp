
#include <bits/stdc++.h>
using namespace std;


void getFibs(vector<long long> &fibs) {
    long long tmp;
    for (int i = 0; i < 100; i++) {
        tmp = fibs[i] + fibs[i+1];
        fibs.push_back(tmp);
    }
}


long long convert2Fib(long long fib, vector<long long> fibs) {
    string fib2Process = to_string(fib);
    vector<int> records;
    long long sum = 0;
    for (int i = 0; i < fib2Process.size(); i++) {
        if (fib2Process[i] == 1)
            records.push_back(i);
    }
    for (auto record : records) {
        sum += fibs[record];
    }
    return sum;
}


int main() {
    long long fib1, fib2, fib;
    vector<long long> fibs = {1, 2};
    getFibs(fibs);
    // for (auto fib : fibs)
    //     cout << fib << " ";
    // cout << endl;

    while (cin >> fib1 >> fib2) {
        fib = convert2Fib(fib1, fibs) + convert2Fib(fib2, fibs);
        cout << fib << endl;
    }
    return 0;
}
