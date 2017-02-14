#include <stdio.h>
#include <stdlib.h>

int main()
{
  char nome[30];

    printf("Informe o seu nome: ");
    scanf("%s",nome);

    int tam = sizeof(nome);

    for(int i = 0; i < tam; ++i){

      printf("%c\n",nome[i]);
      if(nome[i] == '\0'){
        break;
      }
    }

    return 0;
}
