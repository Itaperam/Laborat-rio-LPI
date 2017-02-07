#include <stdio.h>
#include <stdlib.h>

//Functions
void resume(int);
void calculaInss(float);

float salarioBruto = 0;
float salarioLiquido = 0;
double desconto = 0;

int main()
{
  printf("Informe o salário, R$ ");
  scanf("%f",&salarioBruto);

  calculaInss(salarioBruto);

  return 0;
}

//Calcula o desconto do INSS
void calculaInss(float salarioBruto)
{
  if(salarioBruto <= 420) {
    salarioLiquido = salarioBruto - (salarioBruto*8/100);
    desconto = 8;
    resume(desconto);
  }
  else if(salarioBruto > 420 && salarioBruto <= 1350){
    salarioLiquido = salarioBruto - (salarioBruto*9/100);
    desconto = 9;
    resume(desconto);
  }
  else if(salarioBruto > 1350){
    salarioLiquido = salarioBruto - (salarioBruto*10/100);
    desconto = 10;
    resume(desconto);
  }
}

//Imprime o relatório
void resume(int desconto)
{
  printf("\n\n=====================\n");
  printf("Bruto ... R$%.2f\n",salarioBruto);
  printf("Desconto ... R$%.2f \n",salarioBruto - salarioLiquido);
  printf("Líquido ... R$ %.2f\n",salarioLiquido);
  printf("======================\n\n");
}
