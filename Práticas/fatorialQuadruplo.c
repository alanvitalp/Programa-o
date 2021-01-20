#include <stdio.h>
#include <stdlib.h>

int fat4 (int num);
int fat (int num);

int main (int narg, char *argv[]) {
    int num;
    long int result;
    
    printf("Digite um numero: ");
    scanf("%d", &num);
    result = fat4(num); 
    
    printf("fatorial quadruplo: %d", result);
    
    
    return EXIT_SUCCESS;
}

int fat4 (int num) {
    if (num > 1) {
        return fat(num*2) / fat(num);
    } else if (num == 1) {
        return 1;
    } else {
        return 0;
    }

}

int fat(int num) {
    if (num > 1) {
        return num * fat(num-1);
    } else if (num == 1) {
        return 1;
    } else {
        return 0;
    }
}