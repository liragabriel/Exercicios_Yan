#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int tijolo, parede, quantidade; 
	
	//Primeiro eu calculo a area do tijolo
	tijolo = 15 * 30;
	
	//Depois eu calculo a area da parede
	parede = 200 * 400; 
	
	//Agora eu consigo saber quantos grupos com o valor "tijolo" existem dentro da area da parede
	quantidade = parede/tijolo; 
	
	printf("Eu preciso de %i tijolos para construir essa parede", quantidade); 
	
}
