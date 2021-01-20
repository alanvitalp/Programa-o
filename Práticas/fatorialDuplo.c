#include <stdio.h>
#include <stdlib.h>

int fat2 (int num);

int main (int narg, char *argv[]) {
    int num, result;
    
    printf("Digite um numero: ");
    scanf("%d", &num);
    
    result = fat2(num); 
    
   
    
    printf("fat duplo: %d", result);
    
    
    return EXIT_SUCCESS;
}

int fat2 (int num) { 

    if (num > 1) {
        return num * fat2(num - 2);
    } else if (num == 1) {
        return 1;
    } else {
        return 0;
    }
}