#include <stdio.h>
#include <string.h>

int main(void) {
  char palavra[10];
  int tam;
  int i;
  int ax=1;
  printf("Insira a palavra:\n");
  gets(palavra);

  tam = strlen(palavra);
  
  while(1){
    for(i=0;i<ax;i++){
    printf("%c",palavra[i]);
    }
  ax++;
  printf("\n");
  if(ax==tam+1){
    break;
    }
  }
  
  return 0;
}
