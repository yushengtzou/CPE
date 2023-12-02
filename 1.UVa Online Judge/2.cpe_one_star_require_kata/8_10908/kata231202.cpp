// 鄒雨笙 UVa Online Judge 2023/12/01
//
// Problem 10908 - Largest Square
//
// 幾何與座標 


#include<iostream>
#include<vector>
using namespace std;


int main() {
    int T, M, N, Q;
    string word;
    vector<string> matrix;

    cin >> T;

    while(T--) {
        cin >> M >> N >> Q;
        cin.ignore();
        for (int i = 0; i < M; i++) {
            getline(cin, word);
            matrix.push_back(word);
        }

        cout << M << " " << N << " " << Q << endl;

        while(Q--) {
            int r, c, a, b;
            int flag = 0;
            int ans = 1;
            cin >> r >> c;
            for (int i = 1; i <= M || i <= N; i++) {
                for (a = r - i; a <= r + i; a++) {
                    for (b = c - i; b <= c + i; b++) {
                        if (a < 0 || b < 0 || a >= M || b >= N) {
                            flag = 1;
                            break;
                        }
                        else if (matrix[a][b] != matrix[r][c]) {
                            flag = 1;
                            break;
                        }
                    }
                }
                if (!flag)
                    ans+=2;
                else
                    break;
            }
            cout << ans << endl;
        }
        matrix.clear();


    }


}

