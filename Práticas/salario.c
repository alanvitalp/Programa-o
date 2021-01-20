#include <stdio.h>
#include <stdlib.h>

int main(int narg, char *argv[]){
    // declaração de variáveis
    char nome[50];
    float salario, valor, acrescimo, total, gratificao = 0.03;
    int filhos, horas;

    // inputs de dados
    printf("Qual o nome do funcionario? ");
    scanf("%s", nome);

    printf("Quanto ele/ela ganha por hora? ");
    scanf("%f", &valor);

    printf("Quantas horas ele trabalha? ");
    scanf("%d", &horas);

    printf("Quantos filhos ele/ela tem? ");
    scanf("%d", &filhos);
    
    // atribuindo valores a variáveis
    salario = valor * horas;
    acrescimo = salario * filhos * gratificao; 
    total = salario + acrescimo;
    
    // saída de dados
    printf("Filhos: %f \n", acrescimo);
    printf("Funcionario: %s\n", nome);
    printf("Salario: %f\n", salario);
    
    
    // Resolvendo o acrescimo
    if (filhos == 0) {
        printf("O funcionario não tem filhos.\n");
    
    } else if (filhos >= 3){
        printf("Acrescimo: %f\n", acrescimo);
        printf("Salario com acrescimo: %f\n", total);
    
    } else if (filhos < 3 && filhos > 0){
        printf("Quantidade insuficiente para acrescimo\n");
    }


    return EXIT_SUCCESS; 
}