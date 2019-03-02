#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  int n,hz=0,i,j,parprim=0,parsec=0,somax=0,somay=0;
  int v=0,fator;
  system("clear");
  // printf("Digite o range da matriz\n");
  scanf("%d",&n);
  int mat[n][n];
  int vet[n*2+2];
  if(n%2==0){
    fator = 1;
  }else{
    fator = 0;
  }
  for(i=0;i<n*2+2;i++)
    vet[i]=0;
  //srand(time(NULL));
  for(i=0;i<n;i++)
    for (j=0;j<n;j++){
      // mat[i][j]=rand()%100;
      scanf("%d",&mat[i][j]);
      hz+=mat[i][j];
      vet[i]+=mat[i][j];
      vet[j+n]+=mat[i][j];
      if(i == j){
        vet[2*n]+=mat[i][j];
      }else if(i+j == n-1){
        vet[2*n+1]+=mat[i][j];
      }
      v++;
    }
  for (i=0;i<n;i++)
  {
    for (j=0;j<n;j++)
      printf("%04d\t",mat[i][j]);
    printf("\n");
  }
  for (i=0,j=0;i<n,j<n;i++,j++){
    somax+=mat[i][j];
    if(mat[i][j]%2==0){
      parprim+=mat[i][j];
    }
  }
  
  printf("A soma da diagonal principal é %d\n",somax);
  printf("A dos números pares da diagonal primária é %d\n",parprim);
  
  for (i=0,j=n-1;i<=n-1,j>=0;i++,j--){
    somay+=mat[i][j];
    if(mat[i][j]%2==0){
      parsec+=mat[i][j];
    }
  }

  printf("A soma da diagonal secundária é %d\n",somay);
  printf("A soma dos números pares da diagonal secundária é %d\n",parsec);
  printf("O valor total da matriz é %d\n",hz);
  
   for(i=0;i<2*n+1;i++)
     printf("%d\t",vet[i]);
   printf("\n");

  i=0;
  j=0;
  while(i<n*2+fator && j == 0){
    if(vet[i] != vet[i+1]){
      printf("Não é um quadrado mágico\n");
      j++;
    }else if(i == n*2){
      printf("É um quadrado mágico\n");
      j++;
    }
    i++;
  }
  return 0;
}
