#include <stdio.h>
#include <stdlib.h>

int main(int narg, char *argv[]) {
 int n = 1000;
 int i = 1;

 while(i <= n){
   if(i % 2 != 0){
     if(i % 3 != 0  && i % 7 !=0) {
      printf("\n %d", i);
     }
   }
   i++;
 }
    return EXIT_SUCCESS;

}
