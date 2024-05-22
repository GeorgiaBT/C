/*

Exercicio: Escreva um programa que leia como entrada a altura de um triangulo em inteiro,
valide essa altura para valores maiores ou igual a 1 e menores ou igual a 20, e imprima na tela um triângulo de lados iguais à altura lida, formado pelo caractere ‘#’.

Autor: Georgia Borges Teixeira

*/

#include <stdio.h>

int main(){
	
	int chave, altura, linha;
	
	printf("Insira a altura do triangulo (maior ou igual a 1 e menores ou igual a 20): ");
	scanf("%d", &altura);
	
	
	if(altura>=1 || altura<=20){
		
		for( linha=0; linha<altura; linha++){
		
		
			for( chave = 0; chave<=linha; chave++){
				
				printf(" # ");
			
			}
		
		printf("\n");
	
	}
		
	}else{
		
		printf("Altura invalida!");
		
	}
		

	return 0;
}