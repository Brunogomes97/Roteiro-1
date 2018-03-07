#include <stdio.h>
#include <string.h>

int main(void) {
	int i, j;
	int ax=0;
	char pv[10];
	
	
	printf("Insira a palavra: \n");
	gets(pv);
	
	j = strlen(pv)-1;
    for(i=0,j;i<j;i++,j--){
        if(pv[i]==pv[j]){
           ax++; 
            
        }
    }
    if(ax==j){
        
        printf("Eh palindromo\n");
        
    }else{
        
        printf("Nao eh palindromo");
    }
	
	return 0;
}

