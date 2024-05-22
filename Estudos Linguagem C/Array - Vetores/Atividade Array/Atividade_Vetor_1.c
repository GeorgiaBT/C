/*

Exercicio: Escreva um programa em C que declare e inicialize um array para armazenar o nome completo de 5
funcionários de uma empresa, com até 30 caracteres cada nome, e utilize estrutura de repetição para apresentar
na tela uma lista numerada contendo o nome de todos os funcionários

Autor: Georgia Borges Teixeira

*/

#include<stdio.h>

int main(){
	
	char nomes[5][30]={"Amanda", "Pedro", "Joao", "Georgia", "Kamila"};
	int j;
	
	printf("Funcionarios\n\n");
	
	for(j=0; j<5; j++){
		
		printf("%s\n", nomes[j]);
		
	}
	
	
	return 0;
}