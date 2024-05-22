/*

Exercicio: Escreva um programa que declare e
inicialize uma matriz M de 4 x 4
elementos, que representa a distância
em km de 4 cidades entre si.
Em seguida, leia o código (índice) de 2
cidades e apresente a distância entre
elas.
Por exemplo, entre as cidades 1 e 3,
existe uma distância de 30 km

Autor: Georgia Borges Teixeira

*/

#include<stdio.h>

int main(){
	
	int matriz[4][4]={{0,10,8,20},
				      {10,0,25,30},
					  {8,25,0,12},
					  {20,30,12,0}};
	
	int i, j, indice1, indice2;
	
	for(i=0;i<4;i++){
		
		for(j=0; j<4; j++){
			
			printf("%d ", matriz[i][j]);
			
		}
		printf("\n");
		
	}
	
	printf("Insira o indice da primeira cidade que deseja consultar a distancia (indice entre 0 e 3): ");
	scanf("%d", & indice1);	
	
	while(indice1<0 || indice1>3){
			
		printf("Indice invalido! Tente novamente (indice entre 0 e 3): ");
		scanf("%d", & indice1);		
			
	}
	
	printf("Insira o indice da segunda cidade que deseja consultar a distancia (indice entre 0 e 3): ");
	scanf("%d", & indice2);	
	
	while(indice2<0 || indice2>3){
			
		printf("Indice invalido! Tente novamente (indice entre 0 e 3): ");
		scanf("%d", & indice2);		
			
	}
	
	printf("A distancia entre as cidades de indices %d e %d e igual a %d km",indice1, indice2, matriz[indice1][indice2]);
	
	return 0;
}