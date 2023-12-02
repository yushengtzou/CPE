// 鄒雨笙 UVa Online Judge 2023/12/01
//
// Problem 10908 - Largest Square
//
// 幾何與座標 


#include<iostream>
#include<vector>
using namespace std;


int main() {
    int T, M, N, Q; // T: 測資個數; M: 矩陣高; N: 矩陣寬; Q: 座標數量
    int r, c; // r: 列; c: 行
    string row;
    vector<string> matrix;

    cin >> T;
    while (T--) {
        cin >> M >> N >> Q;
        for (int i = 0; i < M; i++) {
            cin >> row;
            matrix.push_back(row);
        }

        cout << M << " " << N << " " << Q << endl;
        while (Q--) {
            int ans, a, b;
            cin >> r >> c;
            ans = 1;
            for (int i = 1; i <= M || i <= N; i++) {
                int flag = 0;
                for (a = r - i; a <= r + i; a++) {
                    for (b = c - i; b <= c + i; b++) {
                        if (a < 0 || b < 0 || a >= M || b >= N) {
                            flag = 1;
                            break;
                        }
                        if (matrix[a][b] != matrix[r][c]) {
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



