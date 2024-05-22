/*

Exercicio: Escreva um programa que receba 3 notas de 5 alunos, armazene as notas em uma matriz, e
utilizando estrutura de repetição, apresente na tela a média das notas de cada aluno

Autor: Georgia Borges Teixeira

*/

#include<stdio.h>

int main(){
	
	int nota[5][3], i,j,k;
	float somaNotas[5], media[5];
	
	for(i=0;i<5;i++){
		
		for(j=0;j<3;j++){
			
			printf("Digite a nota %d do aluno %d: ", j+1, i+1);
			scanf("%d", &nota[i][j]);
			
			somaNotas[i]+= nota[i][j];	
		}
	
	}
	
	for(k=0;k<5;k++){

			media[k] = somaNotas[k]/3;
			printf("\nMedia do aluno %d: %.2f",k+1, media[k]);
 		
	}
	
	
	return 0;
}