//Problema: Escreva um algoritmo que solicite do usuário o valor de um saque em caixa eletrônico, sendoque estarão disponíveis cédulas de 5, 10, 20, 50 e 100. O algoritmo deve apresentar a menorquantidade de cédulas possível de acordo com o saque.
//Autor: Geórgia Borges Teixeira

#include <stdio.h>


int main(){
	
	double cedula2, cedula5, cedula10, cedula20, cedula50, cedula100;
	double saque;
	

	printf("Qual o valor do saque?\n");
	scanf("%f", & saque);

	printf("\n\nSaque: %.2f", saque);
	
	cedula100 = saque / 100;
	saque = saque - (cedula100*100);

	cedula50 = saque / 50;
	saque = saque - (cedula50*50);

	cedula20 = saque / 20;
	saque = saque - (cedula20*20);

	cedula10 = saque / 10;
	saque = saque - (cedula10*10);

	cedula5 = saque / 5;
	saque = saque - (cedula5*5);

	cedula2 = saque / 2;
	saque = saque - (cedula2*2);

	
	printf("\nNotas de 100: %.1f", cedula100 );
	printf("\nNotas de 50: %.1f", cedula50 );
	printf("\nNotas de 20: %.1f", cedula20 );
	printf("\nNotas de 10: %.1f", cedula10 );
	printf("\nNotas de 5: %.1f", cedula5 );
	printf("\nNotas de 2: %.1f", cedula2 );
				  
	return 0;
}
