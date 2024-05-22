/*

Exercicio: Escreva um programa que alimente um vetor com 5 números inteiros e apresente na tela o vetor
em ordem inversa.

Autor: Georgia Borges Teixeira

*/

#include<stdio.h>

int main(){
	
	int numeros[5];
	int i, j;
	
	for( i=1; i<=5; i++){
		
		printf("Insira um numero inteiro: ");
		scanf("%d", & numeros[i]);
		
	}
	
	for ( j=5; j>0; j--){
		
		printf("\nNumero: %d",numeros[j]);
		
	}
	
	
	return 0;
}