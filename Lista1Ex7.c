#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int numero;
	
	printf("Digite o numero a ser verificado: ");
	scanf("%i", &numero); 
	
	if(numero >= 5 && numero <= 15){
		printf("Esta no intervalo");
	}
	else{
		printf("Nao esta no intervalo");
	}	
}
