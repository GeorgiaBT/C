#include <stdio.h>

int main(){
	

	float resultado, dividendo, divisor;
	
	printf("Insira o dividendo: ");
	scanf("%f", & dividendo);
	
	printf("\nInsira o divisor: ");
	scanf("%f", & divisor);
	
	resultado = dividendo/divisor;
	
	printf("\nO resultado da divisão é %.2f", resultado);
		
	return 0;
}