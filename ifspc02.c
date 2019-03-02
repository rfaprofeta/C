#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
	int var,calc;
	printf("Digite o valor que vocẽ deseja calcular ?");
	scanf("%d",&var);
	calc = pow(var,3);
	printf("O cubo de %d é %d ",var,calc);
	return 0;
}
