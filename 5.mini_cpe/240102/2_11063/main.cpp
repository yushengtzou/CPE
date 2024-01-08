// 鄒雨笙 20240102
// 11063 - B2-Sequence


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    int j = 1;
    while(cin >> N){
        int a[N]={0};
        bool s = true;
        for(int i = 0;i<N;i++){
            cin >> a[i];
        }
        for(int i = 0;i<N-1;i++){
            if(a[i]>=a[i+1])
                s =false;
        }
       
        // cout <<"Debug0 " <<s <<endl;
       
        if(a[0]<1)
            s = false;
           
        // cout <<"Debug1 " <<s <<endl;
       
        int sum[20000] = {0};
        int k;
        for(int i = 0;i<N;i++){
            for(int j = i;j<N;j++){
               k = a[i]+a[j];
               sum[k]++;
            }
        }
        for(int i = 0;i<20000;i++){
            if(sum[i]>=2)
                s = false;
        }
       
        // cout <<"Debug2 " <<s<< endl;
       
        // cout << endl;
        if(s == true)
            cout << "Case #" <<j <<": It is a B2-Sequence." << endl;
        else
            cout << "Case #" <<j <<": It is not a B2-Sequence." << endl;    
        j++;
        cout << endl;
    }
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
//
// int main() {
//     int N, num;
//     int cnt = 1;
//     while (cin >> N) {
//         vector<int> nums;
//         set<int> sums;
//         bool flag = true;
//
//         for (int i = 0; i < N; i++) {
//             cin >> num;
//             if (num < 1) { // Check for positive numbers only
//                 flag = false;
//             }
//             nums.push_back(num);
//         }
//
//         // Check for strictly increasing sequence
//         for (int i = 0; i < N-1; i++) {
//             for (int j = i+1; j < N; j++) {
//                 if (nums[i] >= nums[j]) {
//                     flag = false;
//                     break;
//                 }
//             }
//         }
//
//         // Generate sums and check for uniqueness
//         for (int i = 0; i < N-1; i++) {
//             for (int j = i+1; j < N; j++) {
//                 int sum = nums[i] + nums[j];
//                 if (!sums.insert(sum).second) { // If the sum is not unique
//                     flag = false;
//                     break;
//                 }
//             }
//         }
//
//         cout << "Case #" << cnt << ": ";
//         if (flag)
//             cout << "It is a B2-Sequence." << endl;
//         else
//             cout << "It is not a B2-Sequence." << endl;
//         cnt++;
//     }
//     return 0;
// }

