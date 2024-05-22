/*

Exercicio: Altere o mesmo programa anterior para também declarar e inicializar um array que armazene o código de cada
funcionário (número inteiro positivo) sem pedir dados para o usuário, e utilize estrutura de repetição para
apresentar na tela uma lista numerada contendo o código e o nome de cada funcionário da empresa

Autor: Georgia Borges Teixeira

*/

#include<stdio.h>

int main(){
	
	char nomes[5][30]={"Amanda", "Pedro", "Joao", "Georgia", "Kamila"};
	int codigo[5], i,j;
	
	printf("Codigo   Funcionarios\n\n");
	
	
	for(i=0; i<5; i++){

		codigo[i] = i;
		printf("%d        %s\n", codigo[i], nomes[i]);

		
	}

	
	
	return 0;
}