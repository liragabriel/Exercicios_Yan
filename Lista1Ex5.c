#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int foto, largura, altura, parede, quantidade; 
	
	foto = 50 * 80; 
	
	printf("\nDigite a largura da parede em metros: ");
	scanf("%i", &largura); 
	printf("\nDigite a altura da parede em metros: ");
	scanf("%i", &altura);
	
	parede = (largura*100) * (altura*100); 
	quantidade = parede/foto; 
	
	printf("\n\nSera necessario %i fotos para cobrir essa parede", quantidade); 
}
