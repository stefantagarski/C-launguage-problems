//Да се напише програма која ќе провери дали дадена низа од n елементи која се
//чита од стандарден влез е строго растечка, строго опаѓачка или ниту строго
//растечка ниту строго опаѓачка. Резултатот да се испечати на екран.
#include<stdio.h>

int main() {
    int array[100];
    int size;
    scanf("%d", &size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }
    int ascFlag = 1, descFlag = 1;

    for (int i = 0; i < size - 1; i++) {
        if (array[i] <= array[i + 1]) {
            descFlag = 0;
        }
        if (array[i] >= array[i + 1]) {
            ascFlag = 0;
        }
    }
    if (ascFlag) {
        printf("Ascending");
    } else if (descFlag) {
        printf("Descending");
    } else {
        printf("Nor ascending nor descending");
    }


    return 0;
}