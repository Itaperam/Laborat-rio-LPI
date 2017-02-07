#include <stdlib.h>
#include <stdio.h>

//Global
int idade = 0;
float preco = 0;
float total = 0;
int count = 1;

//Functions
void resume(int);

int main()
{
  printf("== OBTENHA SEU DESCONTO! == \n");

  printf("Informe sua idade: ");
  scanf("%i",&idade);

  printf("Informe o valor da boneca: ");
  scanf("%f",&preco);

  if(idade < 0 || preco < 0){
    printf("Idade ou preço inválidos!\nInsira novamente.");
  }
  if(idade <= 18){
    total = preco - (preco*10/100);
    int desconto = 10;
    resume(desconto);
  }
  if (idade > 18) {
    total = preco - (preco*20/100);
    int desconto = 20;
    resume(desconto);
  }
  return 0;
}

// Resumo da transação
void resume(int desconto){
  printf("\n\n====================\n");
  printf("Idade .......%i anos \n",idade);
  printf("Preço ..... R$ %.2f \n",preco);
  printf("Desconto ... R$ %.2f\n",preco*desconto/100);
  printf("....... Total = %.2f \n",total);
  printf("====================\n\n");
}
