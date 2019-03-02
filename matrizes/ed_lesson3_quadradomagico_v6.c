#include<stdio.h>

int main(){

  int c,coluna,l,linha,i= 0;
  int aux = 0;
  int ctrl = 0;
  int vet[10];
  int mat[4][4];
  int vet_ordena[16];

  //Estrutura de repetição para a inicialização do vetor
  for(l=0;l<10;l++)
    vet[l]=0;

  for(l=0;l<4;l++)
    for(c=0;c<4;c++){
      printf("Informe um valor para a posicao %d x %d \n",l+1,c+1);
      scanf("%d",&mat[l][c]);
      vet_ordena[aux] = mat[l][c];
      vet[c] += mat[l][c];
      vet[l+4] += mat[l][c];
      aux++;
      if(c == l){
        vet[8] += mat[l][c];
      }else if(l+c == 3){
        vet[9] += mat[l][c];
      }
    }

  aux = 0;
  while(i<9 && aux == 0){
    if(vet[i] != vet[i+1]){
      printf("Não é um quadrado magico.\n");
      aux++;
    } else
      printf("É um quadrado mágico.\n");
    aux++;
    i++;
  }
  for(l=0,aux=0;l<16 && c != 0;l++)
    for(i=0,c=0;i<16;i++){
      aux = vet_ordena[i];
      if(vet_ordena[i+1] < vet_ordena[i]){
        vet_ordena[i] = vet_ordena[i+1];
        vet_ordena[i+1] = aux;
        c=1;
      }
    }

  for(i=0,aux=0;i<15 && aux == 0;i++)
    if(vet_ordena[i] == vet_ordena[i+1]){
      printf("Ocorrem números repetidos\n");
      aux++;
    }

  return 0;
}
