// números de fibonacci menores que N

#include <stdio.h>
#include <stdlib.h>

int main(int narg, char *argc[]) {
    int n;
    int f1 = 0, f2 = 1, f3 = 0;

    printf("Digite o valor de N: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        f3 = f2 + f1; 
        if (f1 < n) {
            printf("%d \n", f1);
        } else {
            break;
        }
        f1 = f2;
        f2 = f3;
    }

    return EXIT_SUCCESS;
}