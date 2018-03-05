#include <stdio.h>
#include <stdlib.h>

int main(void) {
  
  
  float sal,liq,inss;
  
  
  printf("Insira o valor do salario bruto:\n");
  scanf("%f",&sal);
  
  if (sal < 420){
    inss = (8*sal)/100;
    liq = sal - inss;
    
    printf("O salario liquido eh R$%.2f com R$%.2f descontados do INSS",liq,inss);
  }
  
  
  else if (sal < 1350){
    inss = (9*sal)/100;
    liq = sal - inss;
    
    printf("O salario liquido eh R$%.2f com R$%.2f descontados do INSS",liq,inss);
  }
  
  
  else if (sal > 1350){
    inss = (10*sal)/100;
    liq = sal - inss;
    
    printf("O salario liquido eh R$%.2f com R$%.2f descontados do INSS",liq,inss);
  }
  
  
  
  return 0;
}
