#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int n,hz=0,i,j,parprim=0,parsec=0,somax=0,somay=0;
	system("clear");
	printf("Digite o range da matriz\n");
	scanf("%d",&n);
	int mat[n][n];
	srand(time(NULL));
	for(i=0;i<n;i++)
		for (j=0;j<n;j++){
			mat[i][j]=rand()%100;
			hz+=mat[i][j];
		}
	for (i=0;i<n;i++)
		{
		for (j=0;j<n;j++)
			printf("%04d\t",mat[i][j]);
		printf("\n");
		}
	for (i=0,j=0;i<n,j<n;i++,j++){
		somax+=mat[i][j];
		if(mat[i][j]%2==0)
			parprim+=mat[i][j];
		}
	printf("A soma da diagonal principal é %d\n",somax);
	printf("A dos números pares da diagonal primária é %d\n",parprim);
	for (i=0,j=n-1;i<=n-1,j>=0;i++,j--){
		somay+=mat[i][j];
		if(mat[i][j]%2==0)
			parsec+=mat[i][j];
		}
	printf("A soma da diagonal secundária é %d\n",somay);
	printf("A soma dos números pares da diagonal secundária é %d\n",parsec);
	printf("O valor total da matriz é %d\n",hz);
	printf("By Profeta\n\n\n");
return 0;
}
