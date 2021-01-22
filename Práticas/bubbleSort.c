#include <stdio.h>
#include <stdlib.h>

void bubble_sort (int *vetor, int n) {
    int k, j, aux;

    for (k = 1; k < n; k++) {
        for (j = 0; j < n - k; j++) {
            if (vetor[j] > vetor[j + 1]) {
                aux = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
    }
    printf("\nVetor ordenado: ");
    for(int i = 0; i < n; i++){
        printf("%d" " ",vetor[i]);
    }
}

int main (void) {
    int n;

    printf("Digite o tamanho N do vetor: ");
    scanf("%d", &n);

    int v[n];

    for (int i = 0; i < n; i++ ) {
        scanf("%d", &v[i]);
    }

    printf("\nVetor original: ");
    for(int i = 0; i < n; i++){
        printf("%d" " ", v[i]);
    }


    bubble_sort(v, n);
    
    return EXIT_SUCCESS;
}