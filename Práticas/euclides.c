#include <stdio.h>

int euclides (int x, int y){
  int r = x%y;
  int r1;
  if(r == 0){
    return y;
  }else{
    while(r != 0){
      r1 = y%r;
      y = r;
      r = r1;
    }
    return y;
  }
}

int main(void) {
  int x,y, mdc;
  printf("\nDigite um número: ");
  scanf("%i",&x);

  printf("\nDigite um número: ");
  scanf("%i",&y);

  mdc = euclides(x,y);
  printf("\nO maior divisor comum entre %i e %i é: %i", x, y, mdc);

}