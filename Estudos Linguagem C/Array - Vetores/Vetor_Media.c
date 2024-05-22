/*

Exercicio: Escreva um programa que alimente um vetor com 5 números e calcule a média destes valores.
Na sequência, apresente na tela os valores que são maiores ou iguais à média.

Autor: Georgia Borges Teixeira

*/

#include<stdio.h>

int main(){
	
	int numeros[5];
	int i, j;
	float soma, media;
	
	for( i=1; i<=5; i++){
		
		printf("Insira um numero inteiro: ");
		scanf("%d", & numeros[i]);
		
		soma+=numeros[i];
		
	}
	
	media=soma/5;
	
	printf("------------------------Numeros maiores ou iguais a media------------------------");
	
	for(j=0; j<5;j++){
		
		if(numeros[j]>=media){
			
			printf("\n%d", numeros[j]);
			
		}
		
	}
	
	
	return 0;
}