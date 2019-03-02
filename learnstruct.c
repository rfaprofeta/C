#include<stdio.h>
#include<stdlib.h>

struct pessoa
{ 
  int idade;
  float peso;
  char nome[50];
};


int main(){

  struct pessoa p;
  printf("Qual o seu nome?\n");
  scanf("%[^\n]s",p.nome);
  printf("Qual a sua idade?\n");
  scanf("%d",&p.idade);
  printf("Qual o seu peso?\n");
  scanf("%f",&p.peso);
  printf("Olá %s\n", p.nome);
  printf("Sua idade é %d e seu peso é %.2f\n", p.idade, p.peso);
  return 0;
}
