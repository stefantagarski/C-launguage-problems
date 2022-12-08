
//Да се напише програма која чита знак од тастатура и во зависнот од тоа дали е
// мала или голема буква печати 1 или 0, соодветно.

#include<stdio.h>
#include<math.h>

int main() {
    char letter;
    scanf("%c", &letter);
    int isLower = (letter >= 97) && (letter <= 122); // 1 ako e mala, a 0 vo sprotivno
    printf("%d", isLower);
    return 0;
}