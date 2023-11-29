//  鄒雨笙 UVa Online Judge 2023/11/10
//
//  Problem 10908 - Largest Square


#include<iostream>
#include<vector>
using namespace std;


int main() {
    // T: 測資的個數; M: 矩陣的高; N: 矩陣的寬; Q: 座標的數量
    int T, M, N, Q;
    // r: 列; c: 行
    int r, c, matrixLength;
    string row;
    char center;
    vector<string> matrix;
    vector<int> result;

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

