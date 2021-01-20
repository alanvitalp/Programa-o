#include <stdio.h>
#include <stdlib.h>

int main(int narg, char *argv[]){
  int dia_atual, mes_atual, ano_atual;
  int dia_nasc, mes_nasc, ano_nasc;
  int idade;

  printf("Entre com o dia atual: ");
  scanf("%d", &dia_atual);
  
  printf("Entre com o mes atual: ");
  scanf("%d", &mes_atual);
  
  printf("Entre com o ano atual: ");
  scanf("%d", &ano_atual);

  printf("Entre com o dia do seu nascimento: ");
  scanf("%d", &dia_nasc);

  printf("Entre com o mes do seu nascimento: ");
  scanf("%d", &mes_nasc);

  printf("Entre com o ano do seu nascimento: ");
  scanf("%d", &ano_nasc);

  
  if (mes_atual >= mes_nasc) {
    if (dia_atual >= dia_nasc) {
      idade = ano_atual - ano_nasc;
    } else {
      idade = ano_atual - ano_nasc;
    }
    
  } else {
    idade = ano_atual - ano_nasc - 1;
  }
  
  printf("Sua idade: %d anos\n", idade);

  if (idade < 16) {
    printf("Nao eh eleitor\n");
  } else if (idade >= 16 && idade <= 18) {
    printf("Eleitor facultativo\n");
  } else {
    printf("Eleitor obrigatorio\n");
  }
  
  return EXIT_SUCCESS;
}