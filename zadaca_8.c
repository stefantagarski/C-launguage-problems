#include<stdio.h>

int main(){
    int n,i;
    scanf("%d", &n);
    int A[n],a[n];
    for(i=0; i < n; i++){
        scanf("%d", &A[i]);
    }
    int k;
    int c=0;
    scanf("%d", &k);
    for(i=0; i < n; i++){
        if(A[i]<k){
            a[c]=A[i];
            c++;
        }
    }
    for(i=0; i < n; i++){
        if(A[i]>=k){
            a[c]=A[i];
            c++;
        }
    }
    for(i=0; i < n; i++){
        printf("%d ", a[i]);
    }
    return 0;
}
