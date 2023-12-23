// 鄒雨笙 20231223
// 11388 - GCD LCM


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main() {
    int n, G, L; 
    while ( scanf("%d",&n) != EOF ) 
        for ( int t = 1 ; t <= n ; ++ t ) {
            scanf("%d%d",&G,&L);
            if ( L%G == 0 ) 
                printf("%d %d\n",G,L);
            else printf("-1\n");
    }
    return 0;
}
