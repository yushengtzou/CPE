/*  鄒雨笙 UVa Online Judge 2023/9/2

    Problem 11000: Bee 
*/


#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    vector<pair<long long, long long>> result;

    while (true) {
        cin >> N;

        if (N == -1) {
            break;
        }

        long long male = 0, female = 1, temp;
        for (int i = 0; i < N; i++) {
            temp = male;
            male = male + female;
            female = temp + 1;  // 1 is added for the immortal female bee.
        }

        result.emplace_back(male, male + female);  // male + female gives the total number of bees.
    }

    for (auto &res : result) {
        cout << res.first << " " << res.second << endl;  // male bees and total bees
    }

    return 0;
}


// #include <iostream>
// #include <vector>
// using namespace std;
//
// struct Bee {
//     char gender;
//     Bee* left;  // For male bee
//     Bee* right; // For female bee
//
//     Bee(char g) : gender(g), left(nullptr), right(nullptr) {}
// };
//
// class BeeTree {
//     Bee* root;
//
//     public:
//         BeeTree() {
//             root = new Bee('F'); // The first immortal female bee
//         }
//
//         ~BeeTree() {
//             deleteRec(root);
//         }
//
//         int countMaleBees() {
//             return countMaleBeesRec(root);
//         }
//
//         int countTotalBees() {
//             return countTotalBeesRec(root);
//         }
//
//         void produceOffspring(int generations) {
//             produceRec(root, generations);
//         }
//
//     private:
//         void deleteRec(Bee* bee) {
//             if (!bee) return;
//             deleteRec(bee->left);
//             deleteRec(bee->right);
//             delete bee;
//         }
//
//         int countMaleBeesRec(Bee* bee) {
//             if (!bee) return 0;
//
//             int count = 0;
//             if (bee->gender == 'M') count = 1;
//
//             return count + countMaleBeesRec(bee->left) + countMaleBeesRec(bee->right);
//         }
//
//         int countTotalBeesRec(Bee* bee) {
//             if (!bee) return 0;
//
//             return 1 + countTotalBeesRec(bee->left) + countTotalBeesRec(bee->right);
//         }
//
//         void produceRec(Bee* bee, int generations) {
//             if (!bee || generations <= 0) return;
//
//             if (bee->gender == 'F') {
//                 bee->right = new Bee('M');
//                 produceRec(bee->right, generations - 1);
//             } else if (bee->gender == 'M') {
//                 bee->left = new Bee('M');
//                 bee->right = new Bee('F');
//                 produceRec(bee->left, generations - 1);
//                 produceRec(bee->right, generations - 1);
//             }
//         }
// };
//
// int main() {
//     BeeTree beeColony;
//     int N;
//     vector<vector<int>> result;
//     vector<int> maleAndTotalBeeNum;
//
//     while(true) {
//         cin >> N;
//
//         if(N == -1) {
//             break;
//         }
//
//         beeColony.produceOffspring(N);
//         maleAndTotalBeeNum.push_back(beeColony.countMaleBees());
//         maleAndTotalBeeNum.push_back(beeColony.countTotalBees());
//         result.push_back(maleAndTotalBeeNum);
//         maleAndTotalBeeNum.clear();
//     }
//     for(auto i : result) {
//         for(auto j : i) {
//             cout << j << " ";
//         }
//         cout << endl;
//     }
//
//     return 0;
// }
//
