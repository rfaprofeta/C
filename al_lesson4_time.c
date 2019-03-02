#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void main(void){
int inc;
srand(time(NULL));
do {
inc=(rand()%2);
printf("TESTE %d ",7+inc);
} while (inc%7);
}
