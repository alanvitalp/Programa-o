#include <stdio.h>
#include <stdlib.h>

int bin (int num);

int main (int narg, char *argv[]) {
    int num;
    long int resultado;
    
    printf("Digite um numero: ");
    scanf("%d", &num);
    
    resultado = bin(num);

    
    printf("Seu numero em bin: %d\n", resultado);

    return EXIT_SUCCESS;
}



int bin (int num) {

    if (num > 0) {
        return (num % 2 + 10 * bin(num / 2));
    } 
    else {
        return 0;
    }    
}
