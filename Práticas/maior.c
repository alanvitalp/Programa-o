#include <stdio.h>
#include <stdlib.h>


int main(int narg, char *argv[]) {
    int n;
    float num, soma, maior, menor, media;
    
    printf("Digite um numero inteiro\n");
    scanf("%d", &n);

    soma = 0;
    
    for (int i = 0; i < n; i++) {
        printf("Digite o %d número\n", i + 1);
        scanf("%f", &num);
        soma += num;
        
        if (i == 0){
            maior = num;
            menor = num;
            
        } else {
            if (num > maior) {
                maior = num;
            }
            if (num < menor) {
                menor = num;
            }
        }
    }
    
    media = soma/n;
    
    
    printf("soma: %f \n", soma);
    printf("maior: %f \n", maior);
    printf("menor: %f \n", menor);
    printf("media: %f \n", media);
    
    
    return EXIT_SUCCESS;
}