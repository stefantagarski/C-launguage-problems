//Да се напише програма што проверува дали дадена година што се вчитува од тастатура е
// престапна или не и на екран печати соодветна порака.
#include<stdio.h>
int main () {
    int year;
    scanf("%d%",&year);

           if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0)) {
               printf("leap year");

           } else {
               printf("ordinary year\n");

           }

        return 0 ;
}