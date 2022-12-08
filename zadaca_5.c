//Да се напише програма за ротирање на елементите на една низа за едно место
//во десно. На крај, да се испечати на екран ротираната низа. Елементите од
//низата се читаат од стандарден влез.

#include <stdio.h>
int main() {
  int n,i;
  int array[100];
  scanf("%d",&n);
  for(i=0;i<n;i++){
      scanf("%d",&array[i]);
  }
  int tmp = array[n-1];
  for(i=n-1;i>=1;i--){
      array[i] = array[i-1];
  }
  array[0] = tmp;
  for(i=0;i<n;i++){
      printf("%d",array[i]);
  }
    return 0;
}