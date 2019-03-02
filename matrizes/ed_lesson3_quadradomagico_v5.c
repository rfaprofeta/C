#include<stdio.h>

int main(){

  int c,coluna,l,linha,i= 0;
  int aux = 0;
  int ctrl = 0;
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

  while(i<9 && aux == 0){
    if(vet[i] != vet[i+1]){
      printf("Não é um quadrado magico.\n");
      aux++;
    } else
      printf("É um quadrado mágico.\n");
    aux++;
    i++;
  }

  for(l=0,aux=0;l<4 && ctrl == 0;l++)
    for(c=0;c<4 && ctrl == 0;c++){
      aux = mat[l][c];
      for(linha = l;linha < 4 && ctrl == 0;linha++)
        for(coluna = c+1; coluna < 4 && ctrl == 0; coluna++)
          if(aux == mat[linha][coluna]){
            printf("Ocorrem entradas repetidas\n");
            ctrl++;
          }
        }
  return 0;
}
