//Да се напише програма која ќе го пресмета скаларниот производ на два
//вектори со по n координати. Бројот на координати n, како и координатите на
//векторите се внесуваат од стандарден влез. Резултатот да се испечати на екран.

#include <stdio.h>
int main() {
    int n1,i,array1[100],array2[100];
    int scalar = 0;
    scanf("%d",&n1);
    for(i=0;i<n1;i++){
        scanf("%d",&array1[i]);
    }
    for(i=0;i<n1;i++){
        scanf("%d",&array2[i]);
    }
    for(i=0;i<n1;i++){
        scalar += array1[i] * array2[i];
    }
    printf("Scalarniot proizvod e %d\n",scalar);
    return 0;
}
