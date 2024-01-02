#include <stdio.h>
#include <string.h>

int main() {
    int n, i, j;
    char s[1024];
    while(scanf("%d", &n) == 1) {
        scanf("%*s");
        scanf("%*s");
        scanf("%*s");
        scanf("%s", s);
        scanf("%*s");
        for(i = 0, j = 0; j < n; i += 4, j++) {
            if(s[i] == '*')
                putchar('2');
            else if(s[i+1] == '*')
                putchar('1');
            else
                putchar('3');
        }
        puts("");
    }
    return 0;
}

