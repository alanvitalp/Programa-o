#include <stdio.h>
#include <stdlib.h>

int eh_primo(int num);
int menor_primos(int x);


int main (int narg, char *argv[]) {
    int a, x, primo, menores_primos;

    printf("Digite um numero para checar se eh primo ou nao: ");
    scanf("%d", &a);
    primo = eh_primo(a);

    printf("Digite um numero para imprimir os n primos menores que o seu numero: ");
    scanf("%d", &x);
    menores_primos = menor_primos(x); 
    
    
    
    return EXIT_SUCCESS; 
} 


int eh_primo(int num) {
    int div = 0, i = 1;

    while (i <= num) {
        if (num % i == 0) {
            div++;
        }
        i++;
    }  
    if (div == 2) {
        return printf("%d eh primo\n", num);
    } else {
        return 0;
    }
} 

int menor_primos(int x) {
    int i = 2, j = 1;
    int div = 0, primos = 1;

    while (i < x) {
        while (j <= i) {
            if (i % j == 0) {
                div++;
            }
            j++;
        }
        if (div == 2) {
            eh_primo(i);
            primos++;
        }
        div = 0;
        j = 1;
        i++;
    
    }

}