// 鄒雨笙 20231226
// 11579 - Triangle Trouble


#include <bits/stdc++.h>
using namespace std;


double triangle(double s1, double s2, double s3) {
    double s = (s1 + s2 + s3) / 2;
    return sqrt(s * (s - s1) * (s - s2) * (s - s3));
}


bool check(double s1, double s2, double s3) {
    return (s1 + s2 > s3) && (s1 + s3 > s2) && (s2 + s3 > s1);
}


int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<double> a(N);
        for (int j = 0; j < N; j++) {
            cin >> a[j];
        }
        sort(a.begin(), a.end());

        double maxArea = 0.0;
        for (int j = N - 1; j >= 2; j--) {
            double s1 = a[j-2];
            double s2 = a[j-1];
            double s3 = a[j];
            if (check(s1, s2, s3)) {
                double area = triangle(s1, s2, s3);
                maxArea = max(maxArea, area);
            }
        }

        cout.precision(2);
        cout << fixed << maxArea << endl;
    }
    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;
//
//
// double triangle(double s1, double s2, double s3) {
//     double s, area;
//     s = (s1 + s2 + s3) / 2;
//     area = sqrt(s * (s-s1) * (s-s2) * (s-s3));
//     return area;
//
// }
//
//
// bool check(double s1, double s2, double s3) {
//     bool ans = true;
//     if ((s1 + s2) <= s3)
//         ans = false;
//     return ans;
// }
//
//
// int main()
// {
//     int T;
//     cin >> T;
//     for(int i = 0;i < T;i++){
//         int N;
//         double s1, s2, s3;
//         double area;
//         bool flag = false;
//
//         cin >> N;
//         double a[N];
//         for(int j = 0; j < N; j++){
//             cin >> a[j];
//         }
//         sort(a,a+N);
//
//         for(int j = 0; j < N; j++){
//             cout << a[j] << " ";
//         }
//         cout << endl;
//
//         for (int j = N; j >= 3; j--) {
//             s1 = a[j-3];
//             s2 = a[j-2];
//             s3 = a[j-1];
//             if (check(s1, s2, s3)) {
//                 area = triangle(s1, s2, s3); 
//                 flag = true;
//                 break;
//             }
//         }
//         if (flag) {
//             cout.precision(2);
//             cout << fixed << area << endl;
//         }
//         else
//             cout << 0.00 << endl;
//         // double s = (37.97 + 51.381 + 85.608) / 2;
//         // s1 = 37.97;
//         // s2 = 51.381;
//         // s3 = 85.608;
//         // area = sqrt(s * (s-s1) * (s-s2) * (s-s3));
//         // cout.precision(2);
//         // cout << fixed << area << endl;
//
//     }
//     return 0;
// }
//
// // 5 35.568 85.608 51.381 37.970 19.978
// // 19.978 35.568 37.97 51.381 85.608
// // 540.92
// // 675.05
