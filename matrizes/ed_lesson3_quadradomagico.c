#include<stdio.h>

int main(){

  int c,l,i=0;
  int vet[10];
  int mat[4][4];

//Estrutura de repetição para a inicialização do vetor
  for(l=0;l<10;l++)
    vet[l]=0;

  for(l=0;l<4;l++)
    for(c=0;c<4;c++){
      printf("Informe um valor para a posicao %d x %d \n",l+1,c+1);
      scanf("%d",&mat[l][c]);
      vet[c] += mat[l][c];
      vet[l+4] += mat[l][c];
      if(c == l){
        vet[8] += mat[l][c];
      }else if(l+c == 3){
        vet[9] += mat[l][c];
      }
    }
  
  while(i<10){
    if(vet[i] != 34){
      printf("Não é um quadrado magico.\n");
      break;
    } else if(i == 9){
        printf("É um quadrado mágico.\n");
    }
    i++;
  }
  return 0;
}
