#include <stdio.h>
#include <stdlib.h>

int main(int narg, char * argv[]) {
    long int n, result;

    printf("Digite um numero: ");
    scanf("%d", &n);

    printf("seu numero: %d \n", n);
    printf("Numero invertido\n");
    if (n >= 0) {
        do {
            result = n % 10;
            printf("%d", result);
            n /= 10;
        } while (n != 0);
    }
    
    
    
    return EXIT_SUCCESS;

}