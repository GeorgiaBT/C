/*

Exercicio: Escreva um programa que declare e
inicialize uma matriz M de 4 x 5 elementos e,
utilizando uma estrutura de repetição,
armazene em um vetor V o menor elemento
de cada linha da matriz.

Autor: Georgia Borges Teixeira

*/

#include<stdio.h>

int main(){
	
	int matriz[4][5], i, j,k,l,m,n,g;
	int menor[4];
	
	for(j=0; j<4;j++){
		
		for(i=0; i<5; i++){
		
			printf("\nInsira o valor da linha %d coluna %d: ", j+1, i+1);	
			scanf("%d", & matriz[j][i]);
			
		
		}
		printf("\n");				
	}
	
	for(m=0; m<4;m++){
		
		menor[m]= matriz[m][0];
		
		for(n=0; n<5; n++){
			
			printf(" %d ", matriz[m][n]);
			
			if(menor[m]> matriz[m][n]){
				
				menor[m]= matriz[m][n];
				
			}

		}
		printf("\n");				
	}
	
	printf("\n\n");
	
	printf(" 0  1  2  3 \n");
	
	for(k=0; k<4; k++){
		
		printf(" %d ", menor[k]);
		
	}
	
	
	return 0;
}