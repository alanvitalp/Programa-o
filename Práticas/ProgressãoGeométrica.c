#include <stdlib.h>
#include <stdio.h>

int main (int narg, char *argv[]) {
    int n;
    int p[1000];
    int cont = 1;

    printf("Digite um valor para N: ");
    scanf("%d", &n);

    // preenchendo p[]
    for (int j = 0; j < n; j++) {
        printf("Escreva o %d numero: ", j+1);
        scanf("%d", &p[j]);
    }

    // mostrando a sequencia
    printf("Sua sequencia: ");
    for (int k = 0; k < n; k++) {
        printf("%d," " ", p[k]);
    }
    
    // razao da pg
    int razao = p[1] / p[0];

    // contando se todo o vetor é divisivel pela razao
    for (int i = 0; i < n; i++) {
        if (p[i] * razao == p[i+1]) {
            cont += 1;
        }
    }

    if (cont == n) {
        printf("\nA sequencia eh uma PG");
    } else {
        printf("\nA sequencia nao eh uma pg");
    }

    return EXIT_SUCCESS;
}