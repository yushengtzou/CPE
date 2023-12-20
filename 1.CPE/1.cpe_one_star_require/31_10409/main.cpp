//  鄒雨笙 UVa Online Judge 2023/11/4
//
//  Problem 10409 - Die Game


#include<iostream>
#include<map>
using namespace std;

const string topFace = "topFace";
const string southFace = "southFace";
const string bottomFace = "bottomFace";
const string northFace = "northFace";
const string eastFace = "eastFace";
const string westFace = "westFace";


void rollDice(string command, map<string, int> &dieFaces) {
    int tmp;
    if (command == "north") {
        tmp = dieFaces[topFace];
        dieFaces[topFace] = dieFaces[southFace];
        dieFaces[southFace] = dieFaces[bottomFace];
        dieFaces[bottomFace] = dieFaces[northFace];
        dieFaces[northFace] = tmp;
    }
    else if (command == "south") {
        tmp = dieFaces[topFace];
        dieFaces[topFace] = dieFaces[northFace];
        dieFaces[northFace] = dieFaces[bottomFace];
        dieFaces[bottomFace] = dieFaces[southFace];
        dieFaces[southFace] = tmp;
    }
    else if (command == "east") {
        tmp = dieFaces[topFace];
        dieFaces[topFace] = dieFaces[westFace];
        dieFaces[westFace] = dieFaces[bottomFace];
        dieFaces[bottomFace] = dieFaces[eastFace];
        dieFaces[eastFace] = tmp;
    }
    else if (command == "west") {
        tmp = dieFaces[topFace];
        dieFaces[topFace] = dieFaces[eastFace];
        dieFaces[eastFace] = dieFaces[bottomFace];
        dieFaces[bottomFace] = dieFaces[westFace];
        dieFaces[westFace] = tmp;
    }

}
    

int main() {
    int numCmd;
    string command;

    while (cin >> numCmd and numCmd != 0) {
        map<string, int> dieFaces = {
            {topFace, 1},
            {northFace, 2},
            {southFace, 5},
            {eastFace, 4},
            {westFace, 3},
            {bottomFace, 6},
        };

        for (int i = 0; i < numCmd; i++) {
            cin >> command;
            rollDice(command, dieFaces);
        }
        cout << dieFaces[topFace] << endl;
    }

}
