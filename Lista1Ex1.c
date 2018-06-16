#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	float base, altura, area; 
	
	printf("**Calcule a area de um retangulo***\n\n");
	printf("Informe a base do retangulo: ");
	scanf("%f", &base);
	printf("Informe a altura do retangulo: ");
	scanf("%f", &altura);
	
	area = base * altura; 
	
	printf("\nA area do retangula e %.2f", area);
	
	return 0;
}
