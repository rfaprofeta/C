#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void mostrarLista(char* codigo,int N){
  int k;
  for (k=0;k<N;k++)
    printf("%c ",codigo[k]);
}

void ordena(char codigo[], int N){
  int i,j;
  char tmp;
  for (i=0;i<N-1;i++){
    for (j=i+1;j<N;j++){
      if (codigo[i] > codigo[j]){
        tmp=codigo[j];
        codigo[j]=codigo[i];
        codigo[i]=tmp;
      }
      printf("\nPasso %d: ",i+j);
      mostrarLista(codigo,N);
    }
  }
}
int main(){
  char codigo[]="23030";
  ordena(codigo,strlen(codigo));
  return 0;
}
