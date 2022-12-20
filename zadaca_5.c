//Да се напише програма која за даден природен број ја пресметува разликата помеѓу најблискиот поголем од него прост број и самиот тој број.
//Пример: Ако се внесе 573, програмата треба да испечати 577 – 573 = 4

#include <stdio.h>
int isPrime( int number){
    int i;
    for( i=2;i<number;i++){
        if(number % i ==0 ){
            return 0;
        }
    }
    return 1;
}


int main() {
  int n,i;
  scanf("%d",&n);
  for( i = n+1;; i++){
      if(isPrime(i)){
          printf("%d", i - n);
          break;
      }
  }
    return 0;
}
