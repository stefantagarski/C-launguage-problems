#include <stdio.h>

int main() {
    int n, x, previous_num;
    scanf("%d", &n);
    int diff = 0;
    int temporary = 1;
    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        if (i<1){
            previous_num=x;
        }
        else if  (temporary) {
            temporary = 0;
            diff = x - previous_num;
        }
         else if (diff < (x - previous_num) && (previous_num != x ) ) {
            diff = x - previous_num;
        }
        previous_num=x;
    }

    printf("%d", diff);
    return 0;
}
