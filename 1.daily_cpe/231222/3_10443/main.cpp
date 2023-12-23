// 鄒雨笙 20231222
// 10443 - Rock, Scissors, Paper


#include <iostream>
#include <vector>
using namespace std;


int main() {
    int t, r, c, n, today, tomorrow;
    char win;
    vector< vector< vector<char> > > b( 2, vector<vector<char>>(102, vector<char>(102)) );

    cin >> t;
    while (t > 0) {
        --t;
        cin >> r >> c >> n;

        for (int i = 0; i < r + 2; ++i)
            for (int j = 0; j < c + 2; ++j)
                b[0][i][j] = b[1][i][j] = 'X';
        
        for (int i = 1; i <= r; ++i)
            for (int j = 1; j <= c; ++j)
                cin >> b[0][i][j];

        for (int d = 0; d < n; ++d) {
            today = d % 2;
            tomorrow = (d + 1) % 2;

            for (int i = 1; i <= r; ++i) {
                for (int j = 1; j <= c; ++j) {
                    if (b[today][i][j] == 'R')
                        win = 'P';
                    else if (b[today][i][j] == 'P')
                        win = 'S';
                    else
                        win = 'R';

                    if (b[today][i + 1][j] == win || b[today][i][j + 1] == win || b[today][i - 1][j] == win || b[today][i][j - 1] == win)
                        b[tomorrow][i][j] = win;
                    else
                        b[tomorrow][i][j] = b[today][i][j];
                }
            }
        }

        for (int i = 1; i <= r; ++i) {
            for (int j = 1; j <= c; ++j)
                cout << b[tomorrow][i][j];
            cout << "\n";
        }
        
        if (t != 0)
            cout << endl;
	}

	return 0;
}

// #include <iostream>
// #include <vector>
// using namespace std;
//
//
// // Function to get the character after combat
// char getWinner(char current, char opponent) {
//     if(current == 'R' && opponent == 'S') return 'R';
//     if(current == 'S' && opponent == 'P') return 'S';
//     if(current == 'P' && opponent == 'R') return 'P';
//     return current;
// }
//
// int main() {
//     int t;
//     cin >> t;
//     while(t--) {
//         int r, c, n;
//         cin >> r >> c >> n;
//         vector<string> territory(r);
//         for(int i = 0; i < r; i++) {
//             cin >> territory[i];
//         }
//
//         // Simulate for n days
//         for(int day = 0; day < n; day++) {
//             vector<string> newTerritory = territory;
//             for(int i = 0; i < r; i++) {
//                 for(int j = 0; j < c; j++) {
//                     // Check adjacent cells and apply combat rules
//                     if(i > 0) newTerritory[i][j] = getWinner(newTerritory[i][j], territory[i-1][j]);
//                     if(j > 0) newTerritory[i][j] = getWinner(newTerritory[i][j], territory[i][j-1]);
//                     if(i < r-1) newTerritory[i][j] = getWinner(newTerritory[i][j], territory[i+1][j]);
//                     if(j < c-1) newTerritory[i][j] = getWinner(newTerritory[i][j], territory[i][j+1]);
//                 }
//             }
//             territory = newTerritory;
//         }
//
//         // Output the final territory
//         for(auto &row : territory) {
//             cout << row << endl;
//         }
//         cout << endl; // Print a blank line after each test case
//     }
//     return 0;
// }
//
//
