#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int numero;
	
	printf("Digite o numero a ser verificado: ");
	scanf("%i", &numero); 
	
	if(numero > 17){
		printf("Esta apropriado");
	}
	else{
		printf("Nao esta apropriado");
	}	
}
