//  鄒雨笙 UVa Online Judge 2023/12/12
//
//  Problem 10420 - List of Conquests


#include<iostream>
#include<map>
using namespace std;


int main() {
    map<string, int> cnt;
    string first_s;
    char others[76] = {0};
    int n;
    cin >> n;
    cin.ignore();
    while (n--) {
        cin >> first_s;
        cnt[first_s]++;
        cin.getline(others, 76);
    }

    for (auto it = cnt.begin(); it != cnt.end(); it++) {
        cout << it->first << " " << it->second << endl;
    }
}

