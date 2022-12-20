//Да се пресмета збирот:
//1! + (1 + 2)! + (1 + 2 + 3)! + … + (1 + 2 + … + n)!

#include <stdio.h>
int sumOfNum(int n){
    int sum=0;
    int i;
    for (i=1;i<=n;i++){
        sum += i;
    }
    return sum;
}
int factoriel ( int n){
    int i,product = 1;
    for(i =1;i<n;i++){
        product *= i;
    }
    return  product;
}
int calculateForNumbers (int i){
    return factoriel(sumOfNum(i));
}

int main() {
  int n,i;
  scanf("%d",&n);
  int sum = 0;
  for(i=1;i<=n;i++) {
      sum += calculateForNumbers(i);
  }
  printf("%d",sum);
    return 0;
}
