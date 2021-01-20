#include <stdio.h>
#include <stdlib.h>

int main(int narg, char * argv[]) {
    int numerador, denominador, divisao, resto;
    
    printf("Digite o numerador: ");
    scanf("%d", &numerador); 
    printf("Digite o denominador: ");
    scanf("%d", &denominador);
    
    divisao = numerador / denominador;
    
    resto = numerador - (denominador * divisao);
    
    
    printf("o quociente é %d \n", divisao);
    printf("o resto é %d \n", resto); 

    return EXIT_SUCCESS;
} 