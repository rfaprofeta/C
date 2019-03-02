#include <stdio.h>
#include <stdlib.h>

int main(){
	int mat[3][3];
	int i,j,somax,somay;

	for(i=0;i<=2;i++)
		for (j=0;j<=2;j++)
		{
			printf("Digite um valor para a matriz. [%d]x[%d]",i+1,j+1);
			scanf("%d",&mat[i][j]);
		}
	for (i=0;i<=2;i++)
		{
		for (j=0;j<=2;j++)
			printf("%03d\t",mat[i][j]);
		printf("\n");
		}

	for (i=0,j=0;i<=2,j<=2;i++,j++)
		somax+=mat[i][j];
	printf("A soma da diagonal principal é %d\n",somax);
	for (i=0,j=2;i<=2,j>=0;i++,j--)
		somay+=mat[i][j];
	printf("A soma da diagonal secundária é %d\n",somay);
	return 0;
}
