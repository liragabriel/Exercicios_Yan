#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	printf("Um triangulo e formado por tres lados, e chamaremos cada lado de A, B e C"); 
	int ladoA, ladoB, ladoC; 
	
	printf("\n\nInforme os valores de cada lado do triangulo:\n\n");
	
	printf("Lado A: "); scanf("%i", &ladoA); 
	printf("Lado B: "); scanf("%i", &ladoB);
	printf("Lado C: "); scanf("%i", &ladoC);
	
	if(ladoA == ladoB && ladoA == ladoC){
		printf("\nEste e um triangulo equilatero"); 
	}
	else if(ladoA == ladoB && ladoA != ladoC || ladoA == ladoC && ladoA != ladoB || ladoB == ladoC && ladoB != ladoA){
		printf("\nEste e um triangulo isosceles"); 
	}
	else{
		printf("\nEste e um triangulo escaleno"); 
	}
}
