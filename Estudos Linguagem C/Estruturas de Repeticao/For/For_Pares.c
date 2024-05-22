/*

EXERCICIO:Escreva um programa que mostre todos os números pares existentes entre 1
 e um número lidodo teclado, bem como a quantidade de números apresentados

*/
#include<stdio.h>

int main(){
	
	int numDigitado, qtdNumeros;
	
	
	printf("Digite um numero inteiro: ");
	scanf("%d", &numDigitado);
	
	for (int contador=1; contador<=numDigitado; contador++){
		
		if (contador%2==0){
			
			printf("Numero: %d\n", contador);
			
			qtdNumeros++;
			
		}
	}
	printf("Quantidade de Numeros pares: %d\n", qtdNumeros);
	return 0;
}