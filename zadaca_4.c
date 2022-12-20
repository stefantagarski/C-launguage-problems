//Да се напише програма која што ќе ги отпечати сите четирицифрени природни
//броеви кои се деливи со збирот на двата броја составени од првите две цифри и
//од последните две цифри на четирицифрениот број. На крајот треба да
//отпечати и колку вакви броеви се пронајдени.
#include <stdio.h>
int sumofHalves (int number){
  return number%100 + number/100;
}

int main() {
  int i;
  int counter =0;
  for(i=1000;i<10000;i++){
      if(i % sumofHalves(i)){
          printf("%d\n",i);
          ++counter;
      }
  }
    printf("Counter: %d\n",counter);
    return 0;
}
