#include <stdio.h>
#include <stdlib.h>

int main(int narg, char *argv[]) {
    // entrada de dados
    int num1, num2;
    int quociente, resto;

    // inputs de dados
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    
    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    // tratando a divisão, caso o denominador for zero.
    while (num2 == 0) {
        printf("Divisão por zero.");
        printf("Digite outro denominador");
        scanf("%d", &num2);
    }

    // calculando quociente e resto
    quociente = 0;

    while (quociente * num2 <= num1){
        quociente++;
    }
    
    quociente--;
    resto = num1 - (num2 * quociente);
    
    // resultados na tela.
    printf("Divisão inteira %d \n", quociente);
    printf("Resto da divisão: %d \n", resto);

    
    return EXIT_SUCCESS; 
}