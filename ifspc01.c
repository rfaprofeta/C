#include <stdio.h>
#include <stdlib.h>

//incio do programa

int main(){
	//declaração de variável
	float num1,num2,soma;
	
	printf("Digite um número:");
	scanf("%f",&num1);
	printf("Digite outro número:");
	scanf("%f",&num2);
	soma = (num1 + num2);
	printf("A soma tem como valor,%.2f ",soma);

return 0;
}
