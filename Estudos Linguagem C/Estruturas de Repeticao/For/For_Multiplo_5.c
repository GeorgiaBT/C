/*

EXERCICIO:Escreva um programa que mostre os números múltiplos de 5, no intervalo de 1 até 100

*/
#include<stdio.h>

int main(){
	

	printf("---------------Multiplos de 5-----------\n");
	
		
	for(int numero=1; numero <=100; numero++){
		
		if (numero %5==0){
			
			printf(" %d -", numero);
			
		}
	}
		
		
	
	
	return 0;
}