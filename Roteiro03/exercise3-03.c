#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  char palavra[10];
  char vetAux[10];
  char vetComp[10];
  int i, j;

  int isPa = 1;

  printf("Informe uma palavra: ");
  scanf("%s",palavra);

  int tam = strlen(palavra);

   for (i=0, j=tam-1; j>0 && palavra[i] != '\0'; i++, j--){
     if(palavra[i] != palavra[j]){
       isPa = 0;
       break;
     }
   }
   if(isPa == 1){
     printf("%s é palíndromo\n",palavra);
   }
   else{
     printf("%s não é palíndromo\n",palavra);
   }

  return 0;
}
