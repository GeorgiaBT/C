/*

Exercicio: Continue o programa da atividade 1, para que armazene os nomes dos alunos, e apresente o
nome do aluno, as notas desse aluno, e a média das suas notas

Autor: Georgia Borges Teixeira

*/

#include<stdio.h>
#include <string.h>

int main(){
	
		
	int nota[5][3], h,i,j,k,m;
	float somaNotas[5], media[5];
	char alunos[5][100];
	
	
	for(i=0;i<5;i++){
		
		printf("\nDigite o nome do aluno(a) %d: ", i+1);
		scanf(" %100[^\n]", alunos[i]);

		for(j=0;j<3;j++){
			
			printf("Digite a nota %d do(a) %s: ", j+1, alunos[i]);
			scanf("%d", &nota[i][j]);
			
			somaNotas[i]+= nota[i][j];	
		}
	
	}
	
	for(k=0;k<5;k++){
		printf("\nAluno: %s",alunos[k] );
		
		for(m=0; m<3; m++){
			printf("\nNota %d: ",m+1);
			printf("%d", nota[k][m]);
			
		}
		media[k] = somaNotas[k]/3;
		printf("\nMedia do aluno(a) %s: %.2f",alunos[k], media[k]);
 		
	}
	
	
	return 0;
}