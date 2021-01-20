#include <stdlib.h>
#include <stdio.h>

int main (int narg, char *argv[]) {
    long int n;
    int lista[10000];
    int inversa[10000];
    int digito;
    int i = 0;
    int cont = 0; // cont normal
    int cont_i; // cont inverso

    printf("Digite um N de ate 10 digitos: ");
    scanf("%d", &n);

    // lista inversa
    while (n > 0) {
        digito = n % 10;
        n /= 10;
        inversa[i] = digito;
        i++;
        cont_i++;
    }
    i--;
    
    // lista inversa da inversa KKKKKKKKKKKKK
    for (int k = 0; k < cont_i - 1; k++) {
        lista[k] = inversa[i];
        i--;
    }

    // checando se é palindromo
    for (int j = 0; j < cont_i - 1; j++) {
        if (lista[j] == inversa[j]) {
            cont += 1;
        } 
    }

    if (cont == cont_i - 1) {
        printf("Seu N eh um palindromo\n");
    } else {
        printf("Seu N nao eh palindromo\n");
    }

    return EXIT_SUCCESS;
}
