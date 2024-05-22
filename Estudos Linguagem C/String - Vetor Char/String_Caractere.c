/*

Exercicio: Escreva um programa que receba uma string e um caractere, e retorne o número de vezes que
esse caractere aparece na string

Autor: Georgia Borges Teixeira

*/

#include<stdio.h>
#include<string.h>

int main(){
	
	char str[1000];
	char caractere= ' ';
	int i , aparece=0;
	
		
	printf("Digite uma string: ");
	scanf("%[^\n]", str);
	getchar();
	
	printf("Insira o caractere que deseja buscar na string: ");
	scanf(" %c",& caractere);
	
	for(i=0;i<=strlen(str);i++){
		
		if(str[i]==caractere){
			aparece++;
		}
	}
	
	printf("O caractere '%c' aparece %d vez na string", caractere, aparece);
	
	return 0;
}