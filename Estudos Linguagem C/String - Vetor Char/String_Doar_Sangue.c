/*

Exercicio: Um hospital local está fazendo uma campanha para receber doação de sangue

• O propenso doador deve inicialmente se cadastrar informando o seu primeiro nome, sua idade,
seu peso, responder a um breve questionário e apresentar um documento oficial com foto.

• Faça um programa que permita ao hospital avaliar a aptidão de um voluntário quanto à doação
de sangue.

• Para estar apto a doar sangue, o voluntário deve ter idade entre 16 e 69 anos, pesar pelo
menos 50 kg, estar bem alimentado e não estar resfriado.

• O programa deve ler os dados e imprimir no final o nome do voluntário e se ele está apto ou
não.
ATIVIDADES

Autor: Georgia Borges Teixeira

*/

#include<stdio.h>
#include <string.h>

int main(){
	
	char nome[100];
	char resposta1[3];
	char resposta2[3];
	
	int idade, peso;
	
	printf("\nCAMPANHA DE DOACAO DE SANGUE\n");
	
	printf("Digite seu nome: ");
	scanf(" %100[^\n]", nome);
	
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	
	printf("Digite seu peso: ");
	scanf("%d", &peso);

	printf("Voce esta bem alimentado?\n");
	scanf("%s",& resposta1);

	printf("Voce teve algum resfriado recentemente?\n");
	scanf("%s",& resposta2);
	
	if((idade>=16 && idade<=69) && peso>=50 && (strcmp(resposta1, "sim") == 0) && (strcmp(resposta2, "nao") == 0)){
		
		printf("Nome do voluntario: %s\n", nome);
		printf("VOCE ESTA APTO PARA A DOACAO DE SANGUE!\n");
		
	}else{
		
		printf("Nome do voluntario: %s\n", nome);
		printf("VOCE NAO ESTA APTO PARA A DOACAO DE SANGUE!");
		
	}
	
	return 0;
}