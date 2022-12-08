#include <stdio.h>

int main() {
    int n,N;
    scanf("%d",&N);
    while (N < 100000){
        scanf("%d",&n);
        if(n % 5 == 0){
            printf("_____");
        }
        if(n % 5 == 1){
            printf(".____");
        }
        if(n % 5 == 2){
            printf("..___");
        }
        if(n % 5 == 3){
            printf("...__");
        }
        if(n % 5 == 4){
            printf("...._");
        }
    }
    return 0;
}
