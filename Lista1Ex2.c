#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int PrimeiraPessoa, SegundaPessoa;
	
	printf("Idade da primeira pessoa: ");
	scanf("%i", &PrimeiraPessoa);
	printf("Idade da segunda pessoa: ");
	scanf("%i", &SegundaPessoa);
	
	if(PrimeiraPessoa == SegundaPessoa){
		printf("As duas pessoas tem a mesma idade");
	}
	else{
		if(PrimeiraPessoa > SegundaPessoa){
			printf("A primeira pessoa e mais velha e sua idade e %i anos", PrimeiraPessoa);
		}
		else{
			printf("A segunda pessoa e mais velha e sua idade e %i anos", SegundaPessoa);
		}
	}
	
	return 0;
}
