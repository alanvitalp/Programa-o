#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int fatexpo(int num);


int main (int narg, char *argv[]) {
    int num;
    long int result;
    
    printf("Digite um numero: ");
    scanf("%d", &num);
    result = fatexpo(num); 
    
    printf("hiperfat: %d", result);
    
    return EXIT_SUCCESS;
}

int fatexpo(int num) {
    if (num > 1){
        return pow(num, fatexpo(num-1));
    } else if (num == 1) {
        return 1;
    } else {
        return 0;
    }
}