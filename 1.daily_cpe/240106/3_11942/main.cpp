// 鄒雨笙 20240106
// 11942 - Lumberjack Sequencing


#include <iostream>
#include <cstdlib>
 
using namespace std;
 
int main()
{
	int n,k,p,t,ans;
	while (cin >> t)
	for (int i = 1 ; i <= t ; ++ i) {
		cin >> n >> k >> p;
		ans = (k+p)%n;
		if (!ans) ans = n;
		cout << "Case " << i << ": " << ans << endl;
	}
	
    return 0;
}
