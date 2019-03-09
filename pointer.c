#include<stdio.h>

void main(){

	float x;
	float *p;
	x=3;
	p=&x;
	printf("O valor de x é %f\n",x);
	printf("O endereço de x é %p\n",&x);
	printf("O valor do dado de p é %f\n",*p);
	printf("O endereço de p é %p\n",&p);
	printf("O endereço apontado por p é %p\n",p);
	*p = 10;
	printf("O valor de x é %f\n",x);
	printf("O endereço de x é %p\n",&x);
	printf("O valor do dado de p é %f\n",*p);
	printf("O endereço de p é %p\n",&p);
	printf("O endereço apontado por p é %p\n",p);
}
