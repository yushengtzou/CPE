// 12372 - Packing for Holiday


#include <iostream>
#include <vector>
using namespace std;


int main() {
	int testcases, L, W, H;
        vector<string> result;

        cin >> testcases;
        for(int i = 0; i < testcases; i++) {
                cin >> L >> W >> H;

		if(L > 20 || W > 20 || H > 20) {
                    result.push_back("bad");
                }
                else {
                    result.push_back("good");
                }

	}
        for (int j = 0; j < testcases; j++) {
            cout << "Case " << (j + 1) << ": " << result[j] << endl;
        }

    return 0;
}



