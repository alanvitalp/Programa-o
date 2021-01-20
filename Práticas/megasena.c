#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(int nargs, char * argv[]) {
    int tamanho, mega = 6;
    int v[1000];
    int m[1000];
    int cont = 0;
    
    printf("\nDigite um N de 6 ate 10: ");
    scanf("%d", &tamanho);

    if (tamanho < 6 || tamanho > 10) {
        return 0;
    }

    // preenchendo m[]
    srand(time(NULL));
    for (int k = 0; k < mega; k++) {
        m[k] = rand() % 99;
    }

    // preenchendo v[]
    for (int i = 0; i < tamanho; i++) {
        printf("Entre com o %d numero: ", i + 1);
        scanf("%d", &v[i]);
    }
    
    printf("\nSeus numeros: ");
    for (int j = 0; j < tamanho; j++) {
        printf("(%d)" " ", v[j]);
    }

    // checando acertos
    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < mega; j++) {
            if (v[i] == m[j]) {
                cont += 1;
            }  else {
                cont = cont;
            }
        } 
    }
    
    // numeros sorteados
    printf("\nNumeros sorteados: ");
    for (int i = 0; i < mega; i++) {
        printf("(%d)" " ", m[i]);
    }
    
    if (cont == 6) {
        printf("\nParabens, voce fez uma mega-sena!");
    } else if (cont == 5) {
        printf("\nParabens, voce fez uma quina");
    } else if (cont == 4) {
        printf("\nParabens, voce fez uma quadra");
    } else {
        printf("\nVoce nao pontuou");
    }

    
    
    return EXIT_SUCCESS;
}