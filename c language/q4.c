#include <stdio.h>
enum weekday{mon,tue,wed,thu,fri,sat,sun};
int main() {
   
   
      enum weekday today;
      scanf("%d",&today);
      for(int i = 0;i<=6;i++){
          if(today>6){
              printf("invalid number");
          }
          else 
          printf("%d",weekday[i]);
          
      }

return 0;


}