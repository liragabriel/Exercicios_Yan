#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int valor, comparador; 
	
	comparador = 0; 
	
	for(int x = 1; x <= 200; x++){
		printf("valor: "); 
		scanf("%i", &valor);
	
		if(valor < 20 || valor > 30){
			comparador = comparador + 1;
		}						
	}
	printf("Existem %i numeros fora do intervalo", comparador);	
	
	return 0;
}
