#include <stdio.h>
#include <stdlib.h>

int fat(int num);
int superfat(int num);

int main (int narg, char *argv[]) {
    int num = 5;
    long int result;
    
    result = superfat(num); 
    
    printf("superfat: %d", result);
    
    return EXIT_SUCCESS;
}


int superfat(int num) {
    int i = 1;

    if (num > 1) {
            return fat(num) * superfat(num-1);
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