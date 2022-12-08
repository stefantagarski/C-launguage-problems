#include<stdio.h>
#include<stdlib.h>
 int main ()
 {
     int number_1, number_2;
     scanf("%d%d", &number_1, &number_2);
     if (number_1 <= 0 || number_2 <= 0)
         printf("Invalid input");
         else {
         if (number_2 > number_1) {
             int temp = number_2;
             number_2 = number_1;
             number_1 = temp;
         }
         int cifri = 0;
         for (int i = number_1; i > 0; i /= 10) {
             cifri++;
             number_1 /= 10;
         }
         while (number_2 > 0) {
             if (number_1 % 10 == number_2 % 10) {
                 number_1 /= 100;
                 number_2 /= 10;
             } else {
                 printf("NE");
                 return 0;
             }
         }
         printf("PAREN");
     }
return 0 ;
}
