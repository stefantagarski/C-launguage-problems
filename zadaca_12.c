#include <stdio.h>

int main() {
    int ax,ay,bx,by,cx,cy;
    int true =2;
    scanf("%d%d",&ax,&ay);
    scanf("%d%d",&cx,&cy);
    while(true){
        true--;
        scanf("%d%d",&bx,&by);
        if((bx >= ax && bx <= cx) && (by >= ay && by <= cy) ){
            printf("DA");
        }
        else {
            printf("NE");
        }
    }
    return 0;
}
