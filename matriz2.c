#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int n,i,j,somax=0,somay=0;
	printf("Digite o range da matriz\n");
	scanf("%d",&n);
	int mat[n][n];
	srand(time(NULL));
	for(i=0;i<n;i++)
		for (j=0;j<n;j++)
			mat[i][j]=rand()%100;
	for (i=0;i<n;i++)
		{
		for (j=0;j<n;j++)
			printf("%04d\t",mat[i][j]);
		printf("\n");
		}
	for (i=0,j=0;i<n,j<n;i++,j++)
		somax+=mat[i][j];
	printf("A soma da diagonal principal é %d\n",somax);
	for (i=0,j=n-1;i<=n-1,j>=0;i++,j--)
		somay+=mat[i][j];
	printf("A soma da diagonal secundária é %d\n",somay);
return 0;
}
