#include <stdio.h>
#include <stdlib.h>

int hiperfat(int num);

int main (int narg, char *argv[]) {
    int num;
    long int result;
    
    printf("Digite um numero: ");
    scanf("%d", &num);
    result = hiperfat(num); 
    
    printf("hiperfat: %d", result);
    
    return EXIT_SUCCESS;
}

int hiperfat(int num) {
    
    if (num > 1) {
        return num * num * hiperfat(num-1);
    } else if (num == 1) {
        return 1;
    } else {
        return 1;
    }
}