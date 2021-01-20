#include <stdio.h>
#include <stdlib.h>

int main(int narg, char *argv[]) {
  int ano = 2014;

  if (ano > 1752) {
    if (ano % 4 == 0) {
      if (ano % 100 == 0 && ano % 400 != 0) {
        printf("Nao eh bissexto");
      } else {
        printf("Eh bissexto");
      }
    } else {
      printf("Nao eh bissexto");
    }
  } else {
    printf("Nao eh bissexto");
  }
  

  
  return EXIT_SUCCESS;

}