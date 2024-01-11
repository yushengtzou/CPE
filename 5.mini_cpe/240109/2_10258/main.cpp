// 鄒雨笙 20240109
// 10258 - Contest Scoreboard


#include<iostream>
#include<cstdio>
#include<cstring>
#include<sstream>
#include<algorithm>
using namespace std;


struct Team{
    bool join;
    int num;
    int score;
    int problem;
    int error[10];
};


bool compare( Team a, Team b ){
    if( a.problem > b.problem ) 
        return true;
    if( a.problem < b.problem ) 
        return false;
    if( a.score < b.score ) 
        return true;
    if( a.score > b.score ) 
        return false;
    if( a.num < b.num ) 
        return true;
    return false;
}


int main(){
    int testcase;
    string entry;
    stringstream ss;
    Team teams[105];
    int contestant, problem, time;
    char L;

    while( scanf( "%d", &testcase ) != EOF ){
        getchar();
        getchar();
        for( int i = 0 ; i < testcase ; i++ ){
            if( i ) printf( "\n" );
            for( int j = 0 ; j < 105 ; j++ ){
                teams[j].join = 0;
                teams[j].num = j;
                teams[j].score = 0;
                teams[j].problem = 0;
                memset( teams[j].error, 0, sizeof(teams[j].error) );
            }

        while( getline( cin, entry ) && entry != "" ){
            ss.clear();
            ss.str(entry); 
            ss >> contestant >> problem >> time >> L;

            teams[contestant].join = true;
            if( teams[contestant].error[problem] == -1 ) continue;
            if( L == 'C' ){
                teams[contestant].score += time+teams[contestant].error[problem]*20;
                teams[contestant].problem++;
                teams[contestant].error[problem] = -1;
            }
            else if( L == 'I' )
                teams[contestant].error[problem]++;
        } 
        sort( teams, teams+105, compare );
        for( int j = 0 ; j < 105 ; j++ )
            if( teams[j].join )
            printf( "%d %d %d\n", teams[j].num, teams[j].problem, teams[j].score );
        }
    }
  return 0;
}


// #include <iostream>
// #include <map>
// #include <vector>
// using namespace std;
//
//
// struct Contestant {
//     int id = 0;
//     bool is_enter = false;
//     int problem_stat[10] = {0};
//     int problem_time[10] = {0};
//     char L;
// };
//
//
// int main() {
//     int T, C, P, t, player;
//     char L;
//     map<int, struct contestant> contestants; 
//
//     cin >> T;
//     cout << endl;
//
//     for (int i = 0; i < T; i++) {
//         while (cin >> C >> P >> t >> L) {
//             player = C;
//             struct contestant player;   
//
//             auto item = contestants.find(player);
//             if (item != m1.end()) {
//                 player.problem = P;
//                 player.time = t;
//                 player.L = L;
//                 contestants[C] = player;
//             }
//
//         }
//     }
//     for (auto score : scoreboard) {
//         for (auto it : score)
//             cout << it << " ";
//         cout << endl;
//     }
//
//     return 0;
// }
//
