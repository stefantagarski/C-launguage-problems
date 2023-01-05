//Од тастатура во низа се внесуваат N позитивни цели броеви (N <= 100), а потоа се внесува и цел број ind (ind >= 0).
//Да се напише функција sum_pos која ја прима низата, бројот ind (кој претставува индекс во низата) и бројот на валидни елементи во низата.
//Функцијата треба да врати сумата на сите елементи почнувајќи од дадениот индекс ind па се до крајот на низата.
// Ако индексот ind е поголем од Nфункцијата треба да врати 0.
//НАПОМЕНА: Задачата да се реши со помош на покажувачи (без користење на оператор [ ]).

#include<stdio.h>
int sum_pos(int *array ,int ind, int n);
int main () {
    int n;
    int array[100];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d",&array[i]);
    }
    int ind;
    scanf("%d", &ind);
        printf("%d ",sum_pos(array,ind,n));

    return 0;
}
int sum_pos(int *array ,int ind, int n){
    int i;
    int sum=0;
    if ( ind >= n){
        return 0;
    }
    else {
        for(i=ind;i<n;i++){
            sum += *(array + i);
        }
        return sum;
    }
}