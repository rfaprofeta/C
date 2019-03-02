#include <stdio.h>
#include <stdlib.h>


int main()
{
	float nota1, nota2, nota3, media;
	char nome[80];
	printf("Qual o nome do aluno? ");
	gets(nome);
	printf("Qual a primeira nota? ");
	scanf("%f", &nota1);
	printf("Qual a primeira nota? ");
	scanf("%f", &nota2);
	printf("Qual a primeira nota? ");
	scanf("%f", &nota3);

	media = (nota1 + nota2 + nota3) / 3;

	printf("O nome do aluno eh: %s \n", nome);
	printf("A media do aluno foi: %.2f \n", media);
	system("pause");


    return 0;
}

