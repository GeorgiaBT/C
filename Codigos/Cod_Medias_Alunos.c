/*

Autor: Georgia Borges Teixeira
Data: 17/05/2024
Programa: ler as notas de 7 alunos, calcular a media e verificar a aprovação.


*/

#include <stdio.h>

int main(){
	
	//declarando variaveis
	char alunos[7][51];
	int notas[7][2], contador1, contador2, contador3,contador4,contador5;
	float somaNotas[7], media[7], somaTurma, mediaTurma;
	
	//valor inicial da variavel
	somaTurma=0;
	
	//usando a estrutura de repetição for para cadastrar os dados de cada aluno
	for(contador1=0; contador1<7;contador1++){
		
		//valor inicial da variavel
		somaNotas[contador1]=0;
		
		//cadastrando o nome de cada aluno
		printf("\nDigite o nome do aluno(a) %d: ", contador1+1);
		scanf(" %50[^\n]", alunos[contador1]);
		
		//usando outro for para cadastrar as notas
		for(contador2=0; contador2<2; contador2++){
			
			printf("Digite a nota %d do aluno(a) %s: ", contador2+1, alunos[contador1]);
			scanf("%d", & notas[contador1][contador2]);
			
			//usando while para validação de dados (nao deixa cadastrar nota negativa nem acima de 100)
			while(notas[contador1][contador2]<0 || notas[contador1][contador2]>100){
				
				printf("Valor invalido! Insira um valor entre 0 e 100: ");
				scanf("%d", & notas[contador1][contador2]);
				
			}
			
			//somando os valores na variavel que sera utilizada para calcular a media dos alunos
			somaNotas[contador1] += notas[contador1][contador2];
		}
		
		//calcula a media de cada aluno
		media[contador1] = somaNotas[contador1]/2;
		
		//soma das notas da turma na variavel
		somaTurma+= somaNotas[contador1];
		
	}
	
	//calculando a media da turma
	mediaTurma = somaTurma/7;
	
	//exibe na tela a media da turma
	printf("\nMedia da turma: %.2f", mediaTurma);
	
	//usando estrutura de repeticao para exibir os resultados na tela
	for(contador3=0; contador3<7; contador3++){
		
		printf("\n\n%d - Aluno: %s", contador3+1, alunos[contador3]);
		
		//usando novamente a estrutura de repeticao para imprimir as informações
		for(contador4=0;contador4<2;contador4++){
			
			printf("\nNota %d: %d", contador4+1, notas[contador3][contador4]);
			
		}
		
		printf("\nMedia: %.2f", media[contador3]);
		
		//estrutura condicional verifica a aprovação do aluno
		if(media[contador3]>=60){
			
			printf("\nSITUACAO: APROVADO!");
			
		}else{
			
			printf("\nSITUACAO: REPROVADO!");
			
		}
		
		
	}
	
	//estutura de repeticao combinada de condicional. Verifica a informação de media de cada aluno e imprime na tela se a condição for verdadeira.
	for(contador5=0; contador5<7; contador5++){
		
		if(media[contador5] >= mediaTurma){
			
			printf("\n\nO aluno(a) %s teve uma media maior ou igual a media da turma", alunos[contador5]);
			printf("\nMedia do(a) aluno(a): %.2f", media[contador5]);
			printf("\nMedia da turma: %.2f", mediaTurma);
			
		}
		
	}
	
	return 0;
}