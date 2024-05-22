/*

Exercicio: A prefeitura de uma cidade fez uma pesquisa com 10 pessoas,
 coletando dados sobre o salárioe o número de filhos. 
 A prefeitura deseja saber:
 • A média do salário dessas pessoas;
 • A média do número de filhos;
 • O maior salário;
 • A percentagem de pessoas com salários até R$ 800,00

Autor: Georgia Borges Teixeira

*/

#include <stdio.h>

int main(){


	int numPessoas;
	float  filhos, somaFilhos, salario800, salario, maiorSalario, somaSalario, mediaSalarial, mediaFilhos;

	
	for(numPessoas=0; numPessoas<10; numPessoas++){
		
		printf("Qual é seu salario? ");
		scanf("%f", & salario);
		somaSalario+=salario;
		
		printf("Quantos filhos voce tem? ");
		scanf("%f", & filhos);
		somaFilhos+= filhos;
		
		if (salario>maiorSalario){
			
			maiorSalario = salario;
		}
		
		if (salario<=800){
			
			salario800+=salario;
			
		}
		
	}
	
	mediaSalarial = somaSalario/10;
	mediaFilhos = somaFilhos/10;
	salario800= (salario800/somaSalario)*100;
	
	
	printf("\nA media salarial dos entrevistados é igual a %f", mediaSalarial);
	printf("\nA media de filhos dos entrevistados é igual a %f", mediaFilhos );
	printf("\nO maior salario registrado foi de %.2f", maiorSalario);
	printf("\nA percentagem de pessoas com salários até R$ 800,00 e de %.2f%%", salario800);
	

	return 0;
}