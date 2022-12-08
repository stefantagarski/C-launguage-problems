//Да се напише програма за ротирање на елементите на една низа за m местa во
//десно. На крај, да се испечати на екран ротираната низа. Елементите од низата
//и бројот на ротирања се читаат од стандарден влез.
#include<stdio.h>

int main() {
   int array[100];
   int n,i;
   scanf("%d",&n);
   for(i=0;i<n;i++){
       scanf("%d",&array[i]);
   }
   int m;
   scanf("%d",&m);
   int array2[100];
   for(i=0;i<n;i++){
       array2[(i+m)%n] = array[i];
   }
   for(i=0;i<n;i++){
       printf("%d",array2[i]);
   }
   return 0;
}