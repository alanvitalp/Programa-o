#include <stdio.h>
#include <stdlib.h>
#include <math.h>


double pot (double x, int k);


int main(int narg, char *argv[]) {
    double x;
    int k, resultado, resultado_pow;
    
    printf("Digite a base: ");
    scanf("%lf", &x);
    printf("Digite o expoente: ");
    scanf("%d", &k);

    if (x == 0) {
        return printf("%d", 0); 
    } 

    if (k < 0) {
        while (k < 0) {
            printf("Numero negativo nao aceito\n");
            printf("Insira um numero positivo: ");
            scanf("%d", &k);
        }
    }

    resultado = pot(x, k);
    resultado_pow = pow(x, k);
    
    printf("Resultado da operacao(recursiva): %d \n", resultado);
    printf("Resultado da operacao(pow): %d", resultado_pow);

    return EXIT_SUCCESS;
}

double pot (double x, int k) {
    if (k > 0) {
        return x * pot(x, k-1);
    } else if (k == 0) {
        return 1;
    }
}
   