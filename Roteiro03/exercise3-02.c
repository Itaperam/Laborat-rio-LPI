#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void imprime(char[30]);

int main()
{
  char nome[30];

    printf("Informe o seu nome: ");
    scanf("%s",nome);

    imprime(nome);
    putchar('\n');

  return 0;
}

void imprime(char nome[])
{

  int tam = strlen(nome);

  for(int i = 0; i <= tam; ++i){
    for(int j = 0; j < i; ++j){
      printf("%c",nome[j]);
    }
    putchar('\n');
    if(nome[i] == '\0'){
      break;
    }
   }
}
