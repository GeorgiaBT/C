/*

Exercicio:  Escreva um programa que tenha uma função que receba dois números inteiros e retorne a soma 
dos números existentes entre eles

Autor: Georgia Borges Teixeira

*/

#include<stdio.h>

int soma(int num1, int num2);

int soma(int num1, int num2){
	
	int s;
	s= num1 + num2;
	return s;
	
}

int main(){

	int resultado;
	resultado = soma(7,8);
	
	printf("Resultado: %d", resultado);	

	return 0;
}