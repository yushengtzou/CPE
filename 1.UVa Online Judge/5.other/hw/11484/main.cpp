/*  鄒雨笙 UVa Online Judge 2023/8/28

    Problem 11484 - Document Object Model
*/

#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int> &train, int n, vector<int> &result) {
    int i, j, temp;
    int swapNumber = 0;
    bool swapped;
    for (i = 0; i < n-1; i++) {
        swapped = false;
        for (j = 0; j < n-i-1; j++) {
            if (train[j] > train[j+1]) {
                // swap train[j] and train[j+1]
                temp = train[j];
                train[j] = train[j+1];
                train[j+1] = temp;
                swapped = true;
                swapNumber++;
            }
        }
        
        // If no two elements were swapped by inner loop, then break
        if (swapped == false) {
            break;
        }
    }
    // cout << swapNumber << endl;
    result.push_back(swapNumber);
    swapNumber = 0;
}



int main() {
    int N, trainLength, carriageNum;
    vector<int> train;
    vector<int> result;

    int i = 0;

    cin >> N;
    while (i < N) {
        int j = 0;
        cin >> trainLength;
        while(j < trainLength) {
            cin >> carriageNum;
            train.push_back(carriageNum);
            j++;
        }
        bubbleSort(train, trainLength, result);
        train.clear();
        i++;
    }

    for (auto i : result) {
        cout << "Optimal train swapping takes "<< i << " swaps." << endl;
    }



    return 0;
}

