#include <stdio.h>

int main()
{
  int i=0, maior=0, aux=0;

  printf("Informe um número: ");
  scanf("%i",&i);
    maior = i;

  while(i != 0){
    printf("Informe um número: ");
    scanf("%i",&i);

    if(i > maior){
      maior = i;
    }
  }
  printf("O maior valor informado: %i\n", maior);

  return 0;
}
