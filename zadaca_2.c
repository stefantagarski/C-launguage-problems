#include<stdio.h>
int form (int n);
int main (){
    int n,i;
    scanf("%d",&n);

    form(n);

    return 0;
}
 int form (int n) {
    int i;
    if (n == 0) {
        return 0;
    }
    for (i = 1; i <= n; i++) {
        printf("*");
    }
    printf("\n");
     return form(n - 1);
}
