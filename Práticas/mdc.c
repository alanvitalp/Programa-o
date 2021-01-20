#include <stdio.h>
#include <stdlib.h>

int mdc (int a, int b);


int main (int narg, char *argv[]) {
    int x, y, r;

    printf("Digite um numero: ");
    scanf("%d", &x);
    printf("Digite outro numnero: ");
    scanf("%d", &y);
    
    
    r = mdc (x, y);

    
    printf("mdc de %d e %d eh %d", x, y, r);

    
    return EXIT_SUCCESS;
}

int mdc (int a , int b) {
    int r1, r2;

    r1 = a % b;

    if (r1 == 0) {
        return b;
    } else {
        while (r1 != 0) {
            r2 = b % r1;
            b = r1;
            r1 = r2;
        }
        return b;
    } 

}