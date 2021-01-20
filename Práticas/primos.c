#include <stdio.h>
#include <stdlib.h>

int main(int narg, char *argv[]) {
  int n;
  int div = 0;
  int i = 2, j = 1;
  int primo = 1, ultimo;

  printf("Digite um numero: ");
  scanf("%d", &n);

  while (i <= n) { 
    while (j <= i) { 
      if (i%j == 0) {
        div +=1;
      }
      j++;
    }
    if (div == 2) {
      ultimo = i;
    }
    div = 0;
    j = 1;
    i++;

    if (n - 1 == n) {
      if(i == n-1) {
        printf("Maior numero primo e menor que n: %d", ultimo);
    }
    } else if (i == n) {
        printf("Maior numero primo e menor que n: %d", ultimo);
    }
  }

  return EXIT_SUCCESS;

}