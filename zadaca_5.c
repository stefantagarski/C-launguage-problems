#include <stdio.h>

int main() {
        int n,points,wins,loses,level;
        int maxPoints,index,tmp = 1;
        scanf(" %d ",&n);
        for(int i=0; i<n ; i++){
            scanf("%d %d %d",&level , &wins , &loses);
            if ( level == 1){
                points = (wins * 13) - loses;
            }
            if ( level == 2){
                points = (wins * 13) - (loses * 3);
            }
            if ( points > 0 ){
                printf("Solid player\n");
            }
            else {
                printf("Bad player\n");
            }
            if(tmp) {
                tmp = 0;
                maxPoints = points;
                index = 0 ;
            }
            else if (maxPoints < points){
                maxPoints = points;
                index = i;
            }
        }
        printf("The Most Valueable Player is with number : %d with a score : %d\n",index + 1,maxPoints);
    return 0;
}
