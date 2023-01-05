#include <stdio.h>
int max_digit( int n) {
    if (n < 10) {
        return n;
    } else {
        int last = n % 10;
        int remain = n / 10;
      if (last > max_digit(remain)) {
        return last;
      }
      else{
          return max_digit(remain);
      }
    }
}


int main() {
   int n;
   while(scanf("%d",&n)){

     printf("%d\n",max_digit(n));
   }
    return 0;
}
