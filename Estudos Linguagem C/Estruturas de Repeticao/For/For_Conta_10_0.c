/*

EXERCICIO: Escreva um programa que mostre na tela uma contagem regressiva de 10 até 0 
para olançamento de um foguete

*/
#include<stdio.h>

int main(){
	
	for (int contador=10; contador>=0; contador--){
		
		printf("Numero: %d\n", contador);
		
	}
	
	printf("Fogo!");
	
	return 0;
}