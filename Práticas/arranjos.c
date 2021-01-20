#include <stdio.h>
#include <stdlib.h>

int fat (int n) {
    int res = 1;

    for (int i = 2; i <= n; i++){
        res *= i;
    }
}

int arranjos(int n, int k) {
    int res;

    res = fat(n) / fat(n - k);
    
    return res;

}

int main(int narg, char *argv[]) {
    int n, k, res;

    printf("Entre o valor de N: ");
    scanf("%d", &n);
    printf("Entre o valor de K: ");
    scanf("%d", &k);

    res = arranjos(n, k);
    printf("A quantidade de arranjos de %d, %d a %d eh %d. \n", n, k, k, res); 
        
    
    
    
    return EXIT_SUCCESS;
}