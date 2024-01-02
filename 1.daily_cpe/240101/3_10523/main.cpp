// 鄒雨笙 20240101
// 10523 - Very Easy !!!


#include <iostream>
#include <cstdlib>
#include <cstring>
#include <stdio.h>
using namespace std;
 
int a[ 201 ];
int s[ 201 ];
 
int main()
{
    int N,A;
    while ( cin >> N >> A ) {
            memset( s, 0, sizeof(s) );
memset( a, 0, sizeof(a) );
        a[0] = A; s[0] = A;
        for ( int i = 2 ; i <= N ; ++ i ) {
                for ( int j = 0 ; j <= 200 ; ++ j )
                        a[j] *= A;
                for ( int j = 0 ; j <= 200 ; ++ j ) {
                        a[j+1] += a[j]/10;
                        a[j] %= 10;
                }
                for ( int j = 0 ; j <= 200 ; ++ j )
                        s[j] += a[j]*i;
                for ( int j = 0 ; j <= 200 ; ++ j ) {
                        s[j+1] += s[j]/10;
                        s[j] %= 10;
                }
        }
        int end = 200;
        while ( end >= 1 && !s[ end ] ) end --;
                while ( end >= 0 ) printf("%d",s[end --]);
                printf("\n");
        }
        return 0;
}



// #include <iostream>
// #include <climits>
// using namespace std;
//
// int main() {
//     int N, A;
//     while (cin >> N >> A) {
//         long long ans = 0;
//         long long currentPower = A; // Start with A^1
//         for (int i = 1; i <= N; i++) {
//             ans += i * currentPower; // Add i * (A^i)
//             if (currentPower > LLONG_MAX / A) { // Check for overflow
//                 cout << "Overflow detected, value too large to compute accurately." << endl;
//                 return 0;
//             }
//             currentPower *= A; // Calculate A^(i+1) for the next iteration
//         }
//         cout << ans << endl;
//     }
// }



// #include <iostream>
// using namespace std;
//
// int main() {
//     int N, A;
//     while (cin >> N >> A) {
//         long long ans = 0;
//         long long currentPower = A; // Start with A^1
//         for (int i = 1; i <= N; i++) {
//             ans += i * currentPower; // Add i * (A^i)
//             currentPower *= A; // Calculate A^(i+1) for the next iteration
//         }
//         cout << ans << endl;
//     }
// }



// #include <iostream>
// #include <cmath>
// #include <string>
// using namespace std;
//
//
// int main() {
//     int N, A;
//     long long ans;
//     while (cin >> N >> A) {
//         ans = 0;
//         for (int i = 1; i <= N; i++) {
//             ans += i*pow(A, i);
//         }
//         cout << ans << endl;
//     }
// }
//
//
