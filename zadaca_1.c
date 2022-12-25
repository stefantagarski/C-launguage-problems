//Да се пресмета збирот: \[ 1! + (1+2)! + (1+2+3)! + … + (1+2+…+n)! \] притоа:
//• користете рекурзивна функција за пресметување на збирот на првите k природни броеви.
//• користете рекурзивна функција за пресметување на факториел на еден природен број.

#include <stdio.h>
long factorial ( int n){
    if(n ==1){
        return 1;
    }else{
    return n * factorial(n-1);
}}
long sumOfFirstN (int n){
    if(n==1){
        return 1;
    }else{
    return n+ sumOfFirstN(n-1);
}}
long sum ( int n){
    if( n == 1){
        return 1;
    }
   else{
       return factorial(sumOfFirstN(n) + sum(n-1));
   }
}
int main() {
 int n;
 scanf("%d",&n);
 printf("%ld",sum(n));
    return 0;
}
