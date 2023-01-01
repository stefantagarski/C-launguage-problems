//1.Да се напише функција void sort (int x, int y, int z) која што ќе ги сортира во опаѓачки редослед трите броја,
// односно во x ќе биде сместен најголемиот број, а во z најмалиот.
//Да не се менува main функцијата.

#include<stdio.h>
void sort(int *broj_1,int *broj_2,int *broj_3){
    int tmp;
    if(*broj_1 < *broj_2){
        tmp = *broj_1;
        *broj_1 = *broj_2;
        *broj_2 = tmp;
    }
    if( *broj_1 < *broj_3){
        tmp = *broj_1;
        *broj_1 = *broj_3;
        *broj_3 = tmp;
    }
    if( *broj_2 < *broj_3){
        tmp = *broj_2;
        *broj_2 = *broj_3;
        *broj_3 = tmp;
    }
}




int main() {

    int broj1, broj2, broj3;
    scanf("%d %d %d", &broj1, &broj2, &broj3);

    sort(&broj1, &broj2, &broj3);

    printf("%d %d %d", broj1, broj2, broj3);

    return 0;
}
