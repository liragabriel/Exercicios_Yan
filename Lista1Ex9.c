#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int PrimeiraPessoa, SegundaPessoa; 
	
	printf("\nInforme a idade da primeira pessoa: ");
	scanf("%i", &PrimeiraPessoa); 
	printf("Informe a idade da segunda pessoa: ");
	scanf("%i", &SegundaPessoa);
	
	if(PrimeiraPessoa < SegundaPessoa){
		printf("\n\nA primeira pessoa tem %i anos", PrimeiraPessoa);
		printf("A segunda pessoa tem %i anos", SegundaPessoa);
	}
	else{
		printf("\n\nA segunda pessoa tem %i anos", SegundaPessoa);
		printf("\nA primeira pessoa tem %i anos", PrimeiraPessoa);
	}
}
