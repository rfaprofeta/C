#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int n,hz=0,parprim=0,parsec=0,somax=0,somay=0;
	int i,j,k;
	system("clear");
	printf("Digite o range da matriz\n");
	scanf("%d",&n);
	int mat[n][n][n];
	srand(time(NULL));
	for(i=0;i<n;i++)
		for (j=0;j<n;j++)
			for(k=0;k<n;k++){
				mat[i][j][k]=rand()%100;
					hz+=mat[i][j][k];
		}
	for (i=0;i<n;i++)
		for (j=0;j<n;j++){
			for (k=0;k<n;k++)
				printf("%04d\t",mat[i][j][k]);
		printf("\n");
		}
	for (i=0,j=0;i<n,j<n;i++,j++){
		somax+=mat[i][j][k];
			if(mat[i][j][k]%2==0)
				parprim+=mat[i][j][k];
		}
	printf("A soma da diagonal principal é %d\n",somax);
	printf("A dos números pares da diagonal primária é %d\n",parprim);
	for (i=0,j=n-1;i<=n-1,j>=0;i++,j--){
		somay+=mat[i][j][k];
		if(mat[i][j][k]%2==0)
			parsec+=mat[i][j][k];
		}
	printf("A soma da diagonal secundária é %d\n",somay);
	printf("A soma dos números pares da diagonal secundária é %d\n",parsec);
	printf("O valor total da matriz é %d\n",hz);
	printf("By Profeta\n\n\n");

return 0;
}
