#include <stdio.h>

int main() {

   int n;
   int sum = 0;

   do {
       scanf("%d", &n);

       if(n == 0){
           break;
       }

       sum = sum + n;
       printf("  sum of digit %d\n", sum);

   } while(n != 0);

   return 0;
}