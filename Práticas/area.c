#include <stdio.h>
#include <stdlib.h>

#define PI 3.14

float vol (float r);
float area (float r);

int main(int narg, char *argv[]) {
    float r;
    float volume, area1; 
    
    printf("Digite um valor para o raio: ");
    scanf("%f", &r);
    
    volume = vol(r);
    area1 = area(r);
    
    printf("Volume ~= %.2f \n", volume);
    printf("Area ~= %.2f \n", area1);
    
    return EXIT_SUCCESS;
}


float vol (float r) {
    float v;
    
    v =  4.0/3.0 * r*(r*r) * PI;

    return v;

}

float area (float r) {
    float a;

    a = 4 * PI * r * r;
    
    return a;
}