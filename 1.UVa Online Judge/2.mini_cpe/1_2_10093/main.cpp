//  2023.10.24 鄒雨笙
//  10093 - An Easy Problem!


#include<bits/stdc++.h>
using namespace std;


int compare(string s1, string s2) {
    int cnt = 0;
    for (int i = 0; i < s1.length(); i++) {
        cnt = 0;
        for (int j = 0; j < s2.length(); j++) {
            if (i+j >= s1.length())
                return s2.length() - cnt;
            if (s1[i+j] == s2[j]) {
                cnt++;
                if (cnt == s2.length())
                    return 0;
            }
            else {
                cnt = 0;
                break;
            }
        }
    }
    return s1.length();
}


int main() {

    int Q;
    cin >> Q;
    while (Q--){
        int k, w;
        cin >> k >> w;

        int total = 0;
        string s1, s2;
        cin >> s2;
        for (int i = 0; i < w - 1; i++) {
            s1 = s2;
            cin >> s2;

            // s1, s2
            int ans = compare(s1, s2);
            total += ans;
        }
        cout << total + k << endl;
    }

    return 0;

}

