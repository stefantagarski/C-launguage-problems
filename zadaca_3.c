#include <stdio.h>
int reverseNum (int number) ;
int isPalindrome(int number)  ;
int containsDigits(int number);
int main() {
    int a,b, n;
    scanf("%d %d",&a,&b);
    for(n=a;n<=b;n++){
    if (isPalindrome(n) && containsDigits(n)){
        printf("%d\n",n);
    }
    }
    return 0;
}
int reverseNum (int number) {
    int rev = 0;
    while (number > 0) {
        rev = rev * 10 + number % 10;
        number /= 10;
    }
    return rev;
}
int isPalindrome(int n){
    int original_num = n;
    if(reverseNum(n) == original_num){
        return 1;
    }
    else{
        return 0;
    }
}
int containsDigits(int n){

    int digit = n%10;
    if( n == 0){
        return 1;
    }
    else if ( digit >= 0 && digit <= 4) {
        return containsDigits(n / 10);
    }
    else{
        return  0;
    }
}