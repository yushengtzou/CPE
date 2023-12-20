//  鄒雨笙 UVa Online Judge 2023/11/7
//
//  Problem 10370 - Above Average


#include <iostream>
#include <iomanip>
#include <vector>
#include <sstream> 
using namespace std;


int main() {
    
    int C;
    cin >> C;
    cin.ignore();

    for (int i = 0; i < C; ++i) {
        int peopleNum;
        int mean;
        int sum = 0;
        double peopleAboveAverage = 0;
        double ratios;
        vector<int> grades_init;
        vector<int> grades;

        string gradeWithPeople;
        getline(cin, gradeWithPeople);
        
        stringstream ss(gradeWithPeople);
        string token;
        
        while(getline(ss, token, ' ')) {
            grades_init.push_back(stoi(token));
        }
        
        for (int i = 0; i < grades_init.size(); i++) {
            if (i == 0) {
                peopleNum = grades_init[0];
            }
            else {
                grades.push_back(grades_init[i]);
            }
        }

        for (auto grad : grades) {
            sum += grad;
        }
        mean = sum / peopleNum;
        // cout << mean << endl;
        for (auto grad : grades) {
            if (grad > mean) {
                peopleAboveAverage++;
            }
        }
        ratios = peopleAboveAverage/peopleNum*100;
        cout << fixed << setprecision(3) << ratios << "%"<< endl;


        grades_init.clear();
        grades.clear();

    }

    return 0;
}




