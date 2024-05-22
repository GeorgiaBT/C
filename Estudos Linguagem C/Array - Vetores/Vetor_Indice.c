/*

Exercicio: Escreva um programa que alimente um vetor de 5 números inteiros distintos.
Em seguida, leia um número qualquer do teclado e mostre na tela o índice em que o número se
encontra no vetor, ou então a mensagem "Não encontrado", se o número não estiver presente
no vetor

Autor: Georgia Borges Teixeira

*/

#include<stdio.h>

int main(){
	
	int numeros[5];
	int i, j, numeroDigitado;

	
	for( i=0; i<5; i++){
		
		printf("Insira um numero inteiro (Indice %d): ", i);
		scanf("%d", & numeros[i]);

		
	}
	
	printf("Insira um numero: ");
	scanf("%d", & numeroDigitado);
	
	for( j=0; j<5; j++){
		
		if(numeroDigitado == numeros[j]){
			
			printf("O indice do numero %d e igual a %d",numeroDigitado, j);
			
		}
		
	}
	
	
	return 0;
}