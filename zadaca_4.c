//Да се напише програма што за внесен број на поени од испит ќе генерира соодветна оценка според следната табела:

#include <stdio.h>
int main ()
{
      int points;
      scanf("%d",&points);
      if (points >= 91 ){
          printf("10");
      }
      else if (points >= 81 && points <=90){
          printf("9");
      }
      else if (points >=71 && points <=80){
          printf("8");
      }
      else if (points >=61 && points <= 70){
          printf("7");
      }
      else if ( points >=51 && points <= 60){
          printf("6");
      }
      else if (points >= 0 && points <=50){
          printf("5");
      }
      else
      {
          printf("Not valid number of points");
      }
        return 0 ;

}