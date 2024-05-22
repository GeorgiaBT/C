/*

Exercicio: Escreva um programa que alimente um vetor com 5 números inteiros.
Apresente na tela apenas os valores ímpares que aparecem no vetor.

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
	
	printf("\n---------------------IMPARES-------------------------");
	
	for( j=1; j<=5; j++){
		
		if(numeros[j] %2 !=0){
			
			printf("\n%d", numeros[j]);
			
		}
		
		
	}
	
	
	return 0;
}