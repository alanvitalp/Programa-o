#include <stdio.h>
#include <stdlib.h>

int tetra (int num);

int main (int narg, char *argv[]) {
    int num;
    long int result;
    
    printf("Digite um numero: ");
    scanf("%d", &num);
    result = tetra(num); 
    
    printf("tetranaci: %d", result);
    
    return EXIT_SUCCESS;
}

int tetra (int num) {
    if (num >= 4) {
        return tetra(num-1) + tetra(num-2) + tetra(num-3) + tetra(num-4);
    } else if (num == 3){
        return 1;
    } else {
        return 0;
    }
}