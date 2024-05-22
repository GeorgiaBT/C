/*

Exercicio: Escreva um programa que mostre o tamanho de uma string informada pelo usuário (não utilize
funções).

Autor: Georgia Borges Teixeira

*/

#include<stdio.h>

int main(){
	
	char str[100];
	int i,qtdCaractere=0;
	
	printf("Insira sua string: ");
	scanf("%[^\n]",& str);
	getchar();
	
	for(i=0; str[i]!='\0'; i++){
		
		if(str[i] != ' '){
			
			qtdCaractere++;
			
		}
	}
	
	printf("Quantidade de caracteres: %d",qtdCaractere);
	
	
	return 0;
}