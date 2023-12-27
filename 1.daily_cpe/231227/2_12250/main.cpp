// 鄒雨笙 20231227
// 12250 - Language Detection


#include <iostream>
#include <string>
using namespace std;


int main() {
    string s;
    int cnt = 0;
    while (cin >> s) {
        cnt++;
        cout << "Case " << cnt << ": ";
        if (s == "#")
            break;
        else if (s == "HELLO")
            cout << "ENGLISH";
        else if (s == "HOLA")
            cout << "SPANISH";
        else if (s == "HALLO")
            cout << "GERMAN";
        else if (s == "BONJOUR")
            cout << "FRENCH";
        else if (s == "CIAO")
            cout << "ITALIAN";
        else if (s == "ZDRAVSTVUJTE")
            cout << "RUSSIAN";
        else
            cout << "UNKNOWN";
        cout << endl;
    }
}

