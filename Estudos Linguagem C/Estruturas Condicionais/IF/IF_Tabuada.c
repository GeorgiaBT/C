/*

EXERCICIO: Escreva um programa que apresente na tela a tabuada de um número lido do teclado

*/
#include<stdio.h>

int main(){
	
	int numDigitado;
	
	printf("Digite o numero inteiro que deseja ver a tabuada: ");
	scanf("%d", &numDigitado);
	
	printf("-------------Tabuada----------------\n");
	
	if (numDigitado=0){
		
		printf("Numero invalido");
		
	}else{
			
		for (int contador=1; contador<=10; contador++){
			
			printf("%d X %d = %d\n",numDigitado,contador, contador*numDigitado );
			
		}
		
	}
	
	
	return 0;
}