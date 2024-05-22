/*

Autor: Georgia Borges Teixeira

*/

#include <stdio.h>

int main(){
	
	int numDigitado, linha;
	
	printf("Digite um numero: ");
	scanf("%d", &numDigitado);
	
	
	
	for(int linha=0; linha<numDigitado; linha++){
		
		
		for(int chave = 0; chave<=linha; chave++){
			
			printf(" # ");
		
		}
		
		printf("\n");
	
	}


	return 0;
}