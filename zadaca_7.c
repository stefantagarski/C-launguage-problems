#include <stdio.h>

int main() {
    int i,n,j,k;
    int array[100];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(array[i] == array[j]){
                for(k=j;k<n-1;k++){
                    array[k] = array[k+1];
                }
                --j;
                --n;
            }
        }
    }
    for(i=0;i<n;i++){
        printf("%d",array[i]);
    }
    return 0;
}
