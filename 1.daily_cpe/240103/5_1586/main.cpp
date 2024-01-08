// 鄒雨笙 20240103
// 1586 - Molar mass


#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;


double mass[256];

int main()
{
    memset(mass, 0, sizeof(mass));
    mass['C'] = 12.01;
    mass['H'] = 1.008;
    mass['O'] = 16.00;
    mass['N'] = 14.01;

    int n;
    char buf[1001];
    cin >> n;
    while (n--) {
        scanf("%s",buf);

        double sum = 0.0;
        buf[strlen(buf)] = 'E';
        for (int i = 0; buf[i] != 'E'; ++ i)
            if (mass[buf[i]]) {
                if (buf[i+1] < '0' || buf[i+1] > '9')
                    sum += mass[buf[i]];
                else {
                    int size = 0, now = i+1;
                    while (buf[now] >= '0' && buf[now] <= '9')
                        size = size*10 + buf[now ++]-'0';
                    sum += mass[buf[i]]*size;
                }
            }

        printf("%.3lf\n",sum);
    }
    return 0;
}
