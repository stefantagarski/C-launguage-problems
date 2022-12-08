//Да се напише програма која за низа чии елементи се внесуваат од тестатура, ќе
//го пресмета збирот на парните елементи, збирот на непарните елементи, како
//и односот помеѓу бројот на парни и непарни елементи.
//Резултатот да се испечати на екран.


#include<stdio.h>

int main () {
    int array[100];
    int size,i;
    scanf("%d", &size);
    for ( i=0;i<size;i++){
        scanf("%d", &array[i]);
    }

    int sumEven = 0, sumOdd = 0;
    int countEven = 0, countOdd = 0;
    for (i=0;i<size;i++){
        if (array[i]%2==0){
            sumEven+=array[i];
            countEven++;
        } else {
            sumOdd+=array[i];
            countOdd++;
        }
    }

    printf("Sum of even numbers: %d\nSum of odd numbers:%d\nThe ration between the count of even and odd numbers is: %.2f", sumEven, sumOdd, (float)countEven/countOdd);


    return 0;
}