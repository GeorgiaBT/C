/*

Exercicio: Altere o mesmo programa anterior para também declarar e inicializar um array que armazene o valor de 4
vendas feitas por cada funcionário, e utilize estrutura de repetição para apresentar na tela uma lista numerada
contendo o código, o nome, o valor de cada venda, e o valor médio das vendas de cada vendedor.

Autor: Georgia Borges Teixeira

*/

#include<stdio.h>

int main(){
	
	char nomes[5][30]={"Amanda", "Pedro", "Joao", "Georgia", "Kamila"};
	int codigo[5],i,j,m;
	float  vendas[5][4]={{4.5, 6.7, 8.9, 9},
						 {6,7,9.5, 12,75},
						 {5, 6.75, 7.80,9},
						 {6,7,8,9},
						 {2,3,4,5}}, 
	somaVendas[5], mediaVendas[5] ;
	
	for(i=0; i<5; i++){

		codigo[i] = i;
		
		for(m=0; m<4; m++){
			
			somaVendas[i] += vendas[i][m];	
					
		}
		
		mediaVendas[i] = somaVendas[i]/4;
		
		
		printf("Codigo do Vendedor: %d\nVendedor: %s\n", codigo[i], nomes[i]);
		
		for(j=0; j<4; j++){
			
			printf("Valor da venda %d: %.2f\n", j+1, vendas[i][j]);
			
		}
		
		printf("Media das vendas: %.2f\n\n", mediaVendas[i]);
		
	}
	


	return 0;
}