/*

Exercicio: Escreva um programa que mostre o tamanho de uma string informada pelo usuário (utilize a
função apropriada).

Autor: Georgia Borges Teixeira

*/

#include<stdio.h>
#include <string.h>

int main(){
	
	char str[]={};
	
	printf("Insira sua string: ");
	scanf("%[^\n]", str);
	
	printf("Tamanho da sua string: %d caracteres",strlen(str));	
	
	return 0;
}