#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void numero(int, char[]);

int main()
{
  char telefone[8];
  int i = 0;
  int j = 0;
  int count = 0;

  printf("Informe o telefone: ");
  scanf("%s",telefone);

  count = strlen(telefone);

  printf("%d\n",count);

  numero(count, telefone);

  return 0;
}

 void numero(int count, char telefone[]){
   int i = 0;
   int j = 0;

   if(telefone[0] != '3' && count == 7 ){
     for(j = count; j > 0; --j){
       telefone[j] = telefone[j-1];
     }
       telefone[0] = '3';
   }
   if(telefone[0] != '3' && count > 7){
     printf("Número de telefone inválido\n");
   }
   if(count == 8 && telefone[0] == '3'){
     int x = 0;
     char aux[9];
     char aux2;
     for(x = strlen(telefone); x >= 0; --x){
       if(strlen(telefone) - 4){
         aux[x+1] = telefone[x];
       }
      // aux[x] = telefone[x];
       if(x == 4){
         aux2 = telefone[4];
         aux[x] = '-';
       }
       if(strlen(telefone) < 4){
         aux[x] = telefone[x];
       }
     }
     printf("%s\n",aux );

   }

   printf("%s\n",telefone);

 }
