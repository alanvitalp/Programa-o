#include <stdio.h>
#include <stdlib.h>


int main(int narg, char *argv[]) {
    float num1, num2, divisao;

    printf("Digite o primeiro número: ");
    scanf("%f", &num1);
    
    printf("Digite o segundo número: ");
    scanf("%f", &num2);

    if (num2 > 0 || num2 < 0) {
        divisao = num1 / num2;
        printf("Resultado da Divisão: %f \n", divisao);
    } else {
        printf("Divisão por zero.\n");
    }

    return EXIT_SUCCESS;

}