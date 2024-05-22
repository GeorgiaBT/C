/*

Exercicio: Escreva um programa que alimente um vetor com 5 números.
Apresente na tela o menor valor do vetor, o maior valor do vetor, a soma dos valores do vetor e a
média dos valores do vetor.

Autor: Georgia Borges Teixeira

*/

#include<stdio.h>

int main(){
	
	int numeros[5];
	int i, j, maior, menor;
	float soma, media;
	
	maior = 0;
		
	for( i=0; i<5; i++){
		
		printf("Insira um numero inteiro: ");
		scanf("%d", & numeros[i]);
		
		soma+= numeros[i];
		
		if(numeros[i]> maior){
			
			maior = numeros[i];
			
		}
		
		
	}
	
	menor= numeros[0];
	
	for( j=0; j<5; j++){
		
		if(numeros[i]<menor){
			
			menor=numeros[j];
			
		}
		
	}
	
	media = soma/5;
	
	printf("\nMaior numero do vetor: %d", maior);
	printf("\nMenor numero do vetor: %d", menor);
	printf("\nSoma dos numeros do vetor: %.0f", soma);
	printf("\nMedia dos numeros do vetor: %.2f", media);
		
	
	return 0;
}