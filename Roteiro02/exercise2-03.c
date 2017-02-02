#include <stdio.h>

void imprime(int);

int main()
{
  int n = 0;

  printf("Informe um número: ");
  scanf("%i",&n);

  imprime(n);
  return 0;
}

void imprime(int n)
{
  int i=0, j=0;

  for(i = 1; i <= n; ++i){
    if(i <= n){
      for(j=1; j <=i; ++j){
        printf("%2i",i);
      }
    }
    putchar('\n');
  }
  putchar('\n');
}
