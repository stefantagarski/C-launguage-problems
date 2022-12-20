//Да се напише програма што ќе ги отпечати сите парови прости броеви помали
//од 1000 што се разликуваат меѓу себе за 2. На крај да се отпечати и нивниот број.

#include <stdio.h>
int isPrime(int n){
    int i;
    for(i=2;i*i<n;i++){
        if(n % i == 0){
            return 0;
        }
    }
    return 1;
}
int main() {
  int i;
  int counter = 0;
  for(i=1;i<998;i++){
      if(isPrime(i) && isPrime(i+2)){
            printf("(%d  %d)\n",i,i+2);
            counter++;
      }
  }
  printf("Broj na parovi prosti broevi: %d",counter);
    return 0;
}
