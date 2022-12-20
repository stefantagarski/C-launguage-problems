//Да се напише програма што ќе ги отпечати сите прости броеви помали од 10000
//чиј што збир на цифри е исто така прост број. На крајот да се отпечати колку вакви броеви се пронајдени.

#include <stdio.h>
int isPrime(int n){
   int i;
   for(i=2;i<n;i++){
       if(n % i ==0){
           return 0;
       }
    }
    return 1;
}
int sumOfDigits(int n) {
    int sum = 0;
    while(n != 0) {
        sum += n % 10;
        n /= 10;
    }
    return  sum;
}
int main(){
    int i;
    int counter = 0;
    for(i=1;i<10000;i++){
        if(isPrime(i) && isPrime(sumOfDigits(i))){
            printf("%d\n",i);
            counter++;
        }

        }
    printf("Pronajdeni se:%d\n",counter);
    return 0;
}
