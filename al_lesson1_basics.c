#include <stdio.h>
#include <limits.h>

int main(void){
  int i = INT_MAX;

  printf("O tamanho do tipo (int) eh: %zu bytes / %zu bits\n",sizeof i, sizeof i *8);
  printf("Valor de i: %d\n", i);

 return 0;
}
