#include <stdio.h>
#include <stdlib.h>
#include <iostream>

#define MAX 10

void maiorMenor(float[], char[]);
void mediaAltura(float[], char[]);

int main()
{
  float altura[MAX];
  char sexo[MAX];
  int count = 0;
  float maior;
  float menor;

  while (count < MAX) {
    printf("Informe a altura: ");
    scanf("%f",&altura[count]);

    printf("Informe o sexo: ");
    scanf("%s",&sexo[count]);


    if(altura[count] <= 0)
    {
      while(altura[count] <= 0){
        printf("Informe a altura maior que 0: ");
        scanf("%f",&altura[count]);
        getchar();
      }
    }

    if(sexo[count] != 'f' && sexo[count] != 'm')
    {
      while(sexo[count] != 'f' && sexo[count] != 'm')
      {
        printf("Informe sexo válido: ");
        scanf("%s",&sexo[count]);
      }
    }
    ++count;
  }

  //Verifica o maior e o menor
  maiorMenor(altura, sexo);
  //Identifica a média e a quantidade de cada sexo
  mediaAltura(altura, sexo);
  return 0;
}

void maiorMenor(float altura[], char sexo[])
{
  int i = 0;
  int maior = 0;
  int menor = 0;
  float aux = 0;

  for(i=0; i < MAX; ++i){
    if(altura[i] > altura[maior]){
      maior = i;
    }
    aux = maior;
   if(menor == 0 || menor < altura[i] || menor < altura[maior]){
     menor = i;
   }
  }
  printf("O maior é do sexo: %c\n", sexo[maior]);
  printf("O menor é do sexo: %c\n", sexo[menor]);
}

void mediaAltura(float altura[], char sexo[])
{
  float totalMasculino = 0;
  float totalFeminino = 0;
  int countMasculino = 0;
  int countFeminino = 0;
  float mediaMasculino = 0;
  float mediaFeminino = 0;
  int i = 0;

  for(i = 0; i < MAX; ++i)
  {
    if(sexo[i] == 'f'){
      totalFeminino += altura[i];
      ++countFeminino;
    }
    if(sexo[i] == 'm'){
      totalMasculino += altura[i];
      ++countMasculino;
    }
  }
  mediaFeminino = totalFeminino / countFeminino;
  mediaMasculino = totalMasculino / countMasculino;

  printf("A média de altura feminina é: %.2f\n", mediaFeminino);
  printf("A média de altura masculina é: %.2f\n", mediaMasculino);
  printf("Total de feminino: %i\n",countFeminino);
  printf("Total de masculino: %i\n",countMasculino);
}
