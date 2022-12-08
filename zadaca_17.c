#include<stdio.h>
int main () {
    char c;
    scanf("%c", &c);
    if (c == '.') {
        printf(".");
        return 0;
    }
    char previous = c,tmp;
    while (1) {
        scanf("%c", &c);
        if (previous == '.') {
            printf("%c", previous);
            break;
        }
        if ((c >= 'b' && c <= 'z' && c != 'e' && c != 'i' && c != 'o' && c != 'u') && (previous >= 'b' && previous <= 'z' && previous != 'e' && previous != 'i' && previous != 'o' && previous != 'u')) {
         tmp = previous;
         previous = c;
         c = tmp;
        }
        printf("%c",previous);
        previous = c;
    }
    return 0;
}
