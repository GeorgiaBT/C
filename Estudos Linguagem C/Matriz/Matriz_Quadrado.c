/*

Exercicio:  Escreva um programa que leia o tamanho do lado de um quadrado e imprima um quadrado
daquele tamanho com asteriscos. O programa deve funcionar para quadrados com lados de todos
os tamanhos entre 2 e 20.

Autor: Georgia Borges Teixeira

*/

#include<stdio.h>

int main(){
	
	int lado, i ,j;

	printf("Digite o valor do lado do quadrado: ");
	scanf("%d", &lado);
	
	while(lado<2 || lado>20){
		
		printf("Valor invalido! Tente novamente: ");
		scanf("%d", &lado);
	
	}
	
	for(i =0; i<lado; i++){
		
		for(j=0; j<lado;j++){
			
			printf(" * ");
			
		}
		printf("\n");
	}
	
	return 0;
}