#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int PrimeiroValor, SegundoValor, resultado, x; 
	
	printf("Informe o primeiro numero: ");
	scanf("%i", &PrimeiroValor); 
	printf("Informe o segundo numero: ");
	scanf("%i", &SegundoValor);	
	
	resultado = 0;
	x = 0;
	
	while(x < PrimeiroValor ){
		resultado = resultado + SegundoValor; 		
		x++; 		
	}
	printf("%i", resultado);
	
	return 0; 		
}
