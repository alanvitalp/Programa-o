#include <stdio.h>
#include <stdlib.h>

int main(int narg, char *argv[]) {
  int n;
  int div = 0, primos = 1;
  int i = 2, j = 1;

  printf("Digite um numero: ");
  scanf("%d", &n);

  printf("Os %d primeiros numeros primos sao:\n", n);

  while(primos <= x){ 
    while(j <= i){ 
      if(i%j == 0){
        div +=1;
      }
      j++;
    }
    if(div == 2){
      printf("%d \n",i);
      primos += 1;
    }
    div = 0;
    j = 1;
    i++;
  }

  return EXIT_SUCCESS;

}