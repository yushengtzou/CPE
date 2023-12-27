#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i = 1;i<=n;i++){
        int k;
        cin >> k;
        cout << "Case " << i << ":"<< endl;
        cout << -k*9/4 << " " << k*3/2 << endl;
        cout << k*11/4 << " " << k*3/2 << endl;
        cout << k*11/4 << " " << -k*3/2 << endl;
        cout << -k*9/4 << " " << -k*3/2 << endl;
    }
    return 0;
}
