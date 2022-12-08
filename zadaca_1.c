//Да се напише програма која за две низи кои се внесуваат од тастатура ќе
//провери дали се еднакви или не. На екран да се испачати резултатот од
//споредбата. Максимална големина на низите е 100.

#include <stdio.h>
int main () {
    int array1[100], array2[100];
    int size1, size2;
    scanf("%d", &size1);
    for (int i=0;i<size1;i++){
        scanf("%d", &array1[i]);
    }
    scanf("%d", &size2);
    for (int i=0;i<size2;i++){
        scanf("%d", &array2[i]);
    }

    if (size1!=size2){
        printf("Not equal");
        return 0;
    }

    for (int i=0;i<size1;i++){
        if (array1[i]!=array2[i]){
            printf("Not equal");
            return 0;
        }
    }

    printf("Equal");
    return 0;
}
