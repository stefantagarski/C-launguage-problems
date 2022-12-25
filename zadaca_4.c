#include <stdio.h>
int divisibleByK (int number , int k) {
    if (number%k==0){
        return 1;
    }
    else return 0;
}
int nextDivisibleByK (int number,int k){
    if (divisibleByK(number,k)){
        return number;
    }
    else return (nextDivisibleByK(++number,k));
}