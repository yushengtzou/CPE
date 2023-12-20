/*  鄒雨笙 UVa Online Judge 2023/8/29

    11034 - Ferry Loading IV
*/



#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main() {
    int t, n, carNum;
    scanf("%d", &t);
    while(t--) {
        cin >> n >> carNum;
        n = n*100;
        queue<int> L, R;
        int l;
        string direction;
        while(carNum--) {
            cin >> l >> direction;
            if (direction == "left")
                L.push(l);
            else
                R.push(l);
            direction.clear(); 
        }
        int flag = 0;
        int crossNum = 0;
        
        while(!L.empty() || !R.empty()) {
            crossNum++;
            int sum = 0;
            if (flag) { // right
                while (!R.empty() && sum + R.front() <= n) {
                     sum += R.front();
                     R.pop();
                }
            } 
            else {
                while (!L.empty() && sum + L.front() <= n) {
                    sum += L.front();
                    L.pop();
                }
            }
            flag = 1 - flag;
        }
        printf("%d\n", crossNum);
    }
    return 0;
}



