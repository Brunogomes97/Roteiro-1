#include  <stdio.h>
#include  <stdlib.h>
#define MAX 5

int main(void) {
    
  float altura[MAX];
  char sexo[MAX];
  int i;
  int ind=0;
  float media=0;
  int sexf = 0;
  int sexm = 0;
  float menoralt=100;
  float maioralt=0;
  char menorsex;
  char maiorsex;
  
  
  for(i=0;i<MAX;i++){  
  printf("Insira a altura da pessoa #%d\n",i+1);
  scanf("%f",&altura[i]);
  printf("Insira o sexo da pessoa #%d\n",i+1);
  scanf("%s",&sexo[i]);
  ind++;
  media += altura[i];
  
  if(sexo[i]=='F'||sexo[i]=='f'){
    sexf++;
    }
  else{
    sexm++;
      }
  }
  
  media = media/ind;
  system("cls");
  for(i=0;i<MAX;i++){
    if(altura[i]>maioralt){
      maioralt = altura[i];
      maiorsex = sexo[i];
      
    }
    if(altura[i]<menoralt){
      menoralt = altura[i];
      menorsex = sexo[i];
    }
  }
  
  puts("************************\n");
  puts("************************\n");
  printf("Numero de pessoas do sexo feminino: %d\n",sexf);
  printf("Numero de pessoas do sexo masculino: %d\n",sexm);
  puts("************************\n");
  printf("Pessoa com a maior altura e seu sexo: %.2f - %c\n",maioralt,maiorsex);
  printf("Pessoa com a menor altura e seu sexo: %.2f - %c\n",menoralt,menorsex);
  puts("************************\n"); 
  printf("Media das alturas:%.2f\n",media);
  
  
    
  return 0;
}
