#include<stdio.h>
#include<stdlib.h>

void main (){
	int *p;
	int *v;
	int i,valor;
	p=(int*)malloc(sizeof(int));
	printf("Digite o tamanho do vetor\n");
	scanf("%d",&valor);
	v=(int*)malloc(valor*sizeof(int));
	printf("Imprima os %d valores\n",valor);
	for(i=0;i<valor;i++)
		scanf("%d",&v);
	
	for(i=0;i<valor;i++)
		printf("%d\t",v[i]);

}
