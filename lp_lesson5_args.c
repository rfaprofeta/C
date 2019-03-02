#include<stdio.h>

int main(int argc, char *argv[]){

  int i=1;

  while(i != argc){
    printf("%s\t",argv[i]);
    i++;
  }
  return 0;
}
