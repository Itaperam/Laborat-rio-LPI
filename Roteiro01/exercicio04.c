#include <stdio.h>
#include <stdlib.h>

int fibonacci(int);

int main()
{
  int num, i;
  
  printf("Insira o número:");
  scanf("%d",&num);
  getchar();

  printf("A sequencia é : ");

  for(i=1;i<=num;i++){
    printf("%d ",fibonacci(i));
  }
  getchar();
  return(0);
}

int fibonacci(int f)
{
    if((f==1)||(f==2)){
        return 1;
    }
    else{
        return(fibonacci(f-1)+fibonacci(f-2));
    }
}
