/*  鄒雨笙 UVa Online Judge 2023/8/27

    Problem 11204 - Musical instruments
*/


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int testcase, N, M;
    vector<int> instfirst(35, 0);

    while (cin >> testcase) {
        for (int i = 0; i < testcase; ++i) {
            cin >> N >> M;

            // To reset the vector
            fill(instfirst.begin(), instfirst.end(), 0);  

            for (int j = 0; j < M; ++j) {
                for (int k = 0; k < N; ++k) {
                    int student;
                    cin >> student;
                    if (student == 1) {
                        instfirst[k]++;
                    }
                }
            }

            int answer = 1;
            for (int j = 0; j < N; ++j) {
                if (instfirst[j] > 1) {
                    answer *= instfirst[j];
                }
            }

            cout << answer << endl;
        }
    }

    return 0;
}

