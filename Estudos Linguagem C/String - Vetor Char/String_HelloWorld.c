/*

Exercicio: Escreva um programa que receba a string = "Hello, World!" e a apresente invertida.

Autor: Georgia Borges Teixeira

*/

#include<stdio.h>
#include<string.h>

int main(){
	
	char str[]="Hello, World!";
	int i;
	
	for(i=strlen(str); i>=0; i--){
		
		printf("%c",str[i]);
	}
	
	return 0;
}