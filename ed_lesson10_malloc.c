#include<stdio.h>
#include<stdlib.h>

void main(){
  int *v;
  int i,valor;
  printf("Qual o valor do vetor\n");
  scanf("%d",&valor);
  v = (int*)malloc(valor*sizeof(int));
  for(i=0;i<valor;i++)
    scanf("%d",&v[i]);
  for(i=0;i<valor;i++)
    printf("%d\t%p\n",v[i],&v[i]);

}
