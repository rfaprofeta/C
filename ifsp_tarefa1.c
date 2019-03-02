//****************************************************
//Instituto Federal de São Paulo - Campus Sertãozinho
//Disciplina.......: M2LPBA
//Programação de Computadores e Dispositivos Móveis
//Aluno............: Rafael Profeta da Silva
//****************************************************

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

	int main(){
	int i,alfa=0,gama=0,soma=0,mult=1;/*Inicializamos a variável soma com zero, pois ela acumulará os valores dos vetores. Já a variável mult
	fará a multiplicação. E qualquer número multiplicado por zero, tem-se zero de resultado. Sendo assim, inicializamos com "1". */
	int vet[5];
	char c;
	
	/*Incluímos o função "srand" para o caso do usuário não quiser digitar os valores e fazer que o programa crie os valores aleatórios */
	srand(time(NULL));
	//Estrutura de repetição do while para acompanhar a resposta do usuário
	do
	{
	system("clear");//Quando for necessário voltar, essa função limpará a tela
	printf("Vamos criar um vetor.\n");
	printf("Gostaria de digitar os valores? (Digite 1 para Sim ou 0 para Não)\n");//Conforme a opção do usuário, cairá em um "for" diferente
	scanf("%d",&alfa);
	if (alfa==1){
		for(i=0;i<5;i++){//Neste "for", o usuário deverá preencher o vetor		
			printf("Digite um valor para vet[%d]\t",i+1);
			scanf("%d",&vet[i]);
		 	soma+=vet[i];//Já efetuamos o acumulador no mesmo for
			mult*=vet[i];
			printf("\n");}	
		printf("A soma dos números é %d\n",soma);
			if(soma>0){//E testamos se é positivo ou não
				printf("A soma é positiva\n");
			}
			else{	
				printf("A soma é negativa\n");
			}
		printf("A multiplicação dos números é %d\n",mult);	
			if (mult>=0){
				printf("A multiplicação é positiva\n");
			}
			else{
				printf("A multiplicação é negativa\n");
			}
		gama=1;
	}
	else if (alfa==0){
			for (i=0;i<5;i++){
			vet[i]=rand()%100-50;
			printf("O valor de vet[%d]é\t%04d",i+1,vet[i]);
			soma+=vet[i];
			mult*=vet[i];
			printf("\n");
		}
		printf("A soma dos números é %d\n",soma);
			if (soma>=0){	
				printf("A soma é positiva\n");
			}
			else{	
				printf("A soma é negativa\n"); 
			}
		printf("A multiplicação dos números é %d\n",mult);
			if (mult>=0){
				printf("A multiplicação é positiva\n");
			}
			else{
				printf("A multiplicação é negativa\n");
			}
		gama=1;
	}
	else{
		gama=0;//Se gama for zero, o "while" entenderá como falso e repitirá o loop. E gama somente vale 0 quando alfa não for 1 ou 0. 
		printf("Por favor, digite 0 ou 1\n");
		system("pause");
		}
	} while (gama==0);
	return 0;
}
