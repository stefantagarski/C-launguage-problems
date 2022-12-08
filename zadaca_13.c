#include <stdio.h>

int main() {
   int hour,minutes,seconds;
   scanf("%d%d%d",&hour,&minutes,&seconds);
   if ((hour >= 0 && hour <= 11) && (minutes >=0 && minutes <=59) && (seconds >= 0 && seconds <= 59)){
       printf("%02d:%02d:%02dAM",hour=+12,minutes,seconds);
   }
   else if( hour >=12 && hour <=23 && (minutes >=0 && minutes <=59) && (seconds >= 0 && seconds <= 59))  {
       printf("%02d:%02d:%02dPM",hour-=12,minutes,seconds);
   }
   else if ( hour == 12 && minutes == 0 && seconds == 0){
      printf("%02d:%02d:%02dNOON",hour,minutes,seconds);
   }
else {
    printf("Invalid input");
}

    return 0;
}
