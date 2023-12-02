//  鄒雨笙 UVa Online Judge 2023/12/02
//
//  Problem 10409 - Die Game


#include<iostream>
#include<map>
#include<vector>
using namespace std;


void rotateDice(string command, map<string, int> &die) {
    int temp;
    if (command == "north") {
        temp = die["t"];
        die["t"] = die["s"];
        die["s"] = die["d"];
        die["d"] = die["n"];
        die["n"] = temp; 
    }
    else if (command == "south") {
        temp = die["t"];
        die["t"] = die["n"];
        die["n"] = die["d"];
        die["d"] = die["s"];
        die["s"] = temp; 
    }
    else if (command == "east") {
        temp = die["t"];
        die["t"] = die["w"];
        die["w"] = die["d"];
        die["d"] = die["e"];
        die["e"] = temp; 
    }
    else if (command == "west") {
        temp = die["t"];
        die["t"] = die["e"];
        die["e"] = die["d"];
        die["d"] = die["w"];
        die["w"] = temp; 
    }



}


int main() {
    int n;
    string command;

    while (cin >> n) {
        if (!n)
            break;
        map<string, int> die = {
            {"t", 1},
            {"n", 2},
            {"w", 3},
            {"d", 6},
            {"s", 5},
            {"e", 4}
        };

        while (n--) {
            cin >> command;
            rotateDice(command, die);
        }
        cout << die["t"] << endl;
    }

}
