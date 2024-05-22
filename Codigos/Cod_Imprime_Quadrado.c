/*

EXERCICIO: Escreva um programa que leia o tamanho do lado de um quadrado e imprima um quadradodaquele tamanho com asteriscos.
 O programa deve funcionar para quadrados com lados detodos os tamanhos entre 1 e 20.

*/
#include<stdio.h>

int main(){
	
	int ladoDigitado;

	printf("Insira um valor para o lado do quadrado entre 1 e 20: ");
	scanf("%d", &ladoDigitado);
	if (ladoDigitado < 1 || ladoDigitado >20){
		
		printf("Valor invalido!");
		
	}else{
		
		for(int asterisco1=1; asterisco1<=ladoDigitado; asterisco1++){
		
			for(int asterisco2=1; asterisco2<=ladoDigitado; asterisco2++){
					printf(" * ");
			}
		printf("\n");
		
	}
		
	}

	
	return 0;
}