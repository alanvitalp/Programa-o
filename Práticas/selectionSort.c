#include <stdio.h>
#include <stdlib.h>

void selec_sort(int *vetor, int n) {
    int i, j, min, aux;
  
    for (i = 0; i < n - 1; i++) {
        min = i;
        for (j = 1; j < n; j++) {
        /* Caso tenha algum numero menor ele faz a troca do minimo*/
            if (vetor[j] < vetor[min]) {
                min = j;
            }
        }
        /* Se o minimo for diferente do primeiro numero não ordenado ele faz a troca para ordena-los*/
        if (i != min) {
            aux = vetor[i];
            vetor[i] = vetor[min];
            vetor[min] = aux;
        }
    }
    
    printf("Vetor ordenado: ");
    for (int k = 0; k < n; k++) {
        printf("%d" " ", vetor[k]);
    }
}

int main (void) {
    int n, v[100000];

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);


    printf("\nDigite os valores do vetor: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }

    selec_sort(v, n);
    
    return EXIT_SUCCESS;
}