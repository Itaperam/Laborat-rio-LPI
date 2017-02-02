#include <stdio.h>

int eh_divisivel(int, int);
int eh_primo(int);

int main()
{
  int dividendo = 0;
  int divisor = 0;
  int num = 0;
  int ehPrimo = 0;

  printf("Informe um dividendo: ");
  scanf("%i",&dividendo);

  printf("Informe um divisor: ");
  scanf("%i",&divisor);

  if(eh_divisivel(dividendo, divisor) == 1)
  {
    printf("%i é divisível por %i", dividendo, divisor);
  }
  else{
    printf("%i não é divisível por %i", dividendo, divisor);
  }
  putchar('\n');

  printf("Verifique se um número é primo: " );
  scanf("%i",&num);

  ehPrimo = eh_primo(num);

  printf("%i\n",ehPrimo );


  return 0;
}

// Verifica se é divisível
int eh_divisivel(int dividendo, int divisor)
{
  if((dividendo % divisor) == 0){
    return 1;
  }
  else{
    return 0;
  }
}

// Verifica se é primo
int eh_primo(int num)
{
  int i = 0;
  int qtdDivisoes = 0;

  for(i = 1; i <= num; ++i){
    //printf("%i",i );
    if (eh_divisivel(num, i) == 1) {
      ++qtdDivisoes; // Acumula aquantidade de divisões realizadas
    }
  }
  if((qtdDivisoes == 2) && eh_divisivel(num, 1) && eh_divisivel(num, num)){
    // Verifica quais foram as divisões
    //é primo
    return 1;
  }
  else{
    // Não é primo
   return 0;
  }
}
