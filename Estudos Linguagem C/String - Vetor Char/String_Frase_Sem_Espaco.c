/*

Exercicio: Escreva um programa que leia uma frase de até 50 caracteres. Em seguida, escreva a frase sem
os espaços em branco

Autor: Georgia Borges Teixeira

*/

#include<stdio.h>
#include <string.h>

int main(){
	
	char frase[1000];
	int i;
	
	printf("Digite uma frase: ");
	scanf(" %[^\n]", frase);
	
	for(i=0; frase[i]!= '\0';i++){
		
		if(frase[i] != ' '){
			
			printf("%c", frase[i]);
			
		}
	}
	
	
	return 0;
}