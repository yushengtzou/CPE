#include <bits/stdc++.h>
using namespace std;

int main()
{
    string D;
    string N;
    while(cin >> D >> N && !(D =="0"&&N=="0")){
        string k;
        bool first = false;
        for(int i = 0;i<N.length();i++){
            if(D[0]!=N[i]){
                if(N[i]!='0')
                    first = true;
                if(first == true)
                    k+=N[i];
            }
        }
        if(k=="")
            cout << "0" << endl;
        else
            cout << k << endl;
    }
    return 0;
}
