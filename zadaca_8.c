#include<stdio.h>
    int main () {
    int N;
    scanf("%d\n",&N);
    int sum = 0 , zbir = 0;
    for(int i=1;i <= N;i++){
     int a;
     scanf("%d",&a);
     int cifra;
     int NajgolemPodredenBroj = a;
     int tmp = a;
        while (tmp){
            cifra = tmp % 10;
            if(cifra <= NajgolemPodredenBroj){
                NajgolemPodredenBroj = cifra;
            }
            else if (cifra > NajgolemPodredenBroj){
                break ;}
            tmp /=10;
        }

        if (tmp == 0){

            ++sum;
            zbir += a;

        }
    }
    printf("%d\n%d",zbir,sum);
    return 0 ;
}