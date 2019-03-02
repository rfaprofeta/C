main()
{
    printf ("primeiro programa");
}
#include <stdio.h>

bool
#include <stdio.h>

int main(){
    int a,b,c=0;
    printf("Digite o valor de a:"); scanf("%d",&a);
    printf("Digite o valor de b:"); scanf("%d",&b);
    c=a+b;
    printf("A soma eh: %d",c);
    return 0;
}

#include <stdio.h>

int main() {
    float a,b,c = 0.0;
    printf("Qual eh a sua altura:"); scanf("%f",&a);
    printf("Qual eh o seu peso:"); scanf("%f",&b);
    c=b/(a * a);
    printf("o seu IMC eh de %.2f\n", c);
    if (c < 20.0) {
            printf("Voce esta abaixo do peso\n");
    }

    else if  (c >= 20 && c <24) {
            printf("Voce esta abaixo do peso\n");
    }

    else if (c >=24 && c <30) {
            printf("Voce esta com sobrepeso\n");
    }

    else if (c>=30 && c <35) {
            printf("Você esta obeso\n");
    }
    else  if (c>35){
            printf("Voce esta com obesidade morbida\n");
    }
    return 0;
}
#include <stdio.h>

int main() {
    float a,b,aux = 0.0;

    printf("Qual eh o valor de A:"); scanf("%f",&a);
    printf("Qual eh o valor de B:"); scanf("%f",&b);

    aux = a;
    a = b;
    b = aux;

    printf("O valor de A %.2f\n", a);
    printf("O valor de B %.2f\n", b);

    return 0;

}
#include <stdio.h>
#include <math.h>

sqrt()
#include <stdio.h>
#include <conio.h>

  void imprimir_menu(){

    printf("1 - Calcular IMC\n");
    printf("2 - Calcular equacao 2 grau\n");
    printf("3 - Converter temperatura Celsius p/ Farenheit\n");
    printf("\n Escolha uma opção\n");
    }

    float Calcular_IMC(){
    float a,b,c = 0.0;
    printf("Qual eh a sua altura:"); scanf("%f",&a);
    printf("Qual eh o seu peso:"); scanf("%f",&b);
    c=b/(a * a);
    printf("o seu IMC eh de %.2f\n", c);
    if (c < 20.0) {
            printf("Voce esta abaixo do peso\n");
    }

    else if  (c >= 20 && c <24) {
            printf("Voce esta abaixo do peso\n");
    }

    else if (c >=24 && c <30) {
            printf("Voce esta com sobrepeso\n");
    }

    else if (c>=30 && c <35) {
            printf("Você esta obeso\n");
    }
    else  if (c>35){
            printf("Voce esta com obesidade morbida\n");
    }
    return c;}
    void Calcular_eq2grau(){
    }
    void ConverterCelcius2Farenheit(){
    }

    void determinar_tipo_triangulo()



int main(){

char op;
system ("cls");
imprimir_menu();
op=getch();
switch (op){
    case '1':
        Calcular_IMC ();
    break;
    case '2':
        Calcular_eq2grau();
    break;
    case '3':
        ConverterCelcius2Farenheit();
    break;
    default:
    printf("\n Opção inválida ! \n");

    return 0;
}
}
