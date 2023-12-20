// 鄒雨笙 20231219
// 11875 - 11875 - Brick Game



#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    for(int i = 0;i < T;i++){
        int N;
        cin >> N;
        int a[N];
        for(int j = 0; j<N; j++){
            cin >> a[j];
        }
        sort(a,a+N);
        cout << "Case " << i+1 << ": " << a[N/2] << endl;
    }
    return 0;
}

//
//
// #include<iostream>
// #include<vector>
// using namespace std;
//
//
// int main() {
//     int T;
//
//     cin >> T;
//     cin.ignore();
//     for (int c = 0; c < T; c++) {
//         string line;
//         vector<int> ages;
//
//         getline(cin, line);
//         for (int i = 0; i < line.size(); i++) {
//             string ageString = "";
//             int age = 0;
//             if (i == 0)
//                 continue;
//             while ()
//                 ageString += line[i];
//                 if (i == 0 or line[i] == ' ')
//                     break;
//             age = stoi(ageString);
//             cout << age << endl;
//             ages.push_back(age);
//         }
//
//         // for (auto age : ages) {
//         //     cout << age << endl;
//         // }
//
//     }
//
//
//
//
//
// }
