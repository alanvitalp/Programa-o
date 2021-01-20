#include <stdio.h>
#include <stdlib.h>


int main(int narg, char *argv[]) {
    int ladoA, ladoB, ladoC;

    printf("Digite o ladoA");
    scanf("%d", ladoA);
    printf("Digite o ladoB");
    scanf("%d", ladoB);
    printf("Digite o ladoC");
    scanf("%d", ladoC);

    if (ladoA + ladoB > ladoC){
        printf("É um triangulo!");
    } else if (ladoA + ladoC > ladoB) {
        printf("É um triangulo!");
    } else if (ladoB + ladoC > ladoA) {
        printf("É um triangulo!");
    } else {
        printf("Não é um triangulo!");
    }

    return EXIT_SUCCESS;

}