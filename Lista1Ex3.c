#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int x, largura, area;
	
	printf("*** Frente do terreno = 8 metros\nLargura do terreno = (2x+3) ***");
	printf("\n\nInforme o valor de x: ");
	scanf("%i", &x);
	
	largura = (2*x)+3; 
	area = largura * 8; 
	
	printf("\nA area do terreno e %i metros", area); 
	
	return 0;
}
