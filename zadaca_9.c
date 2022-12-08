#include <stdio.h>

int main(){
    int n,max=0;
    scanf("%d", &n);
    int a[100][100];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d", &a[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        int flag_rast=1;
        for(int j=0;j<n+1;j++){
            if(a[i][j]<=a[i][j+1]-1){
                flag_rast++;
            }else{
                flag_rast=1;
            }
            if(max < flag_rast){
                max=flag_rast;
            }
        }

    }
    printf("%d", max);
    return 0;
}