/*
 
Exercicio:  Escreva uma função que retorne o maior valor entre três números inteiros.

Autor: Georgia Borges Teixeira

*/

#include<stdio.h>

int maiorValor(int num1, int num2, int num3);

int maiorValor(int num1, int num2, int num3){

	int maior = num1;
	
	if (num2 > maior){
		
		maior = num2;
		
	}
	
	if (num3 > maior){
		
		maior = num3;
		
	}
	
	
	return maior;
	
}

int main(){
	
	int maiorNum ;
	maiorNum = maiorValor(7,45,9);
	printf("Maior numero: %d",maiorNum );
	
	return 0;
}