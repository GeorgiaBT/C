/*

Exercicio: Altere o mesmo programa anterior para apresentar no fim da lista o código e nome do vendedor com maior valor
médio de vendas

Autor: Georgia Borges Teixeira

*/

#include<stdio.h>

int main(){
	
	char nomes[5][30]={};
	int codigo[5],i,j,m,n,k;
	float  vendas[5][4], somaVendas[5], mediaVendas[5], maiorMedia ;
	
	maiorMedia=0;
	
	for(i=0; i<5; i++){
		
		printf("Digite o nome do funcionário: ");
		scanf(" %30[^\n]", nomes[i]);
		
		codigo[i] = i;
		
		for(m=0; m<4; m++){
			
			printf("Digite o valor da venda %d do funcionário %s: ", m+1, nomes[i]);
			scanf("%f", &vendas[i][m]);
			
			while(vendas[i][m]<0){
				
				printf("Valor invalido! Digite um valor positivo: ");
				scanf("%f", &vendas[i][m]);
				
			}
			
			somaVendas[i] += vendas[i][m];			
		}		
		
		mediaVendas[i] = somaVendas[i]/4;
		
		if(mediaVendas[i]> maiorMedia){
			
			maiorMedia = mediaVendas[i];
			
		}
		printf("\n\n");
	}
	
	for(j=0; j<5; j++){
		
		printf("Codigo do vendedor: %d\nVendedor: %s\n", codigo[j], nomes[j]);
		
		for(n=0; n<4; n++){
			
			printf("Valor da venda %d: %.2f\n", n+1, vendas[j][n]);
			
		}
		
		printf("Media das vendas: %.2f\n", mediaVendas[j]);
		
		printf("\n");
	}
	
	for(k=0;k<5;k++){
		
		if(mediaVendas[k] == maiorMedia){
			
			printf("\nO vendedor com maior media de vendas e %d - %s\n", codigo[k], nomes[k]);
	
			
		}
		
	}
	

	
	return 0;
}