//Од тастатура се внесуваат координати на една точка од рамнина.
//Да се напише програма со која ќе се испечати на кој квадрант припаѓа внесената точка.
#include<stdio.h>
int main ()
{
    int x,y;
    scanf("%d%d",&x,&y);
    if (y==0 && x==0){
        printf("Center of coordinate");
        return 0 ;
    }
    if( y == 0){
        printf("x axis");
        return 0 ;
    }
    if (x == 0 ){
        printf(" y axis");
        return 0 ;
    }

    if (y>0 && x>0 ) {
        printf("I Kvadrant");
    }
    if (y>0 && x<0){
        printf("II Kvadrant");
    }
    if (y<0 && x<0){
        printf("III Kvadrant");
    }
    if (y<0 && x>00){
        printf("IV Kvadrant");
    }
    return 0 ;
}