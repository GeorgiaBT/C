/*

Exercicio: Escreva uma função que receba um símbolo e dois números. O símbolo representa a operação 
que se deseja efetuar com os números (soma, subtração, multiplicação ou divisão).

Autor: Georgia Borges Teixeira

*/

#include<stdio.h>

float operacao(char simbolo, float num1, float num2);

float operacao(char simbolo, float num1, float num2){
	
	float resultado;
	
	switch(simbolo){
	
		case '+':
			resultado = num1 + num2;
			break;
			
		case '-':
			resultado = num1 - num2;
			break;
			
		case '*':
			resultado = num1 * num2;
			break;
			
		case '/':
			if(num2=0){
				
				printf("Erro! Operacao invalida (numero dividido por 0)");
				
			}
			resultado = num1 / num2;
			break;
			
		default:
			printf("Erro! Operacao invalida.");
			break;
	
	}
	
}


int main(){
	
	char equacao;
	float numero1 , numero2, result;
	
	printf("Digite o simbolo da operacao que deseja realizar:\n[+] Soma\n[-] Subtracao\n[*] Multiplicacao\n[/] Divisao\n");
	scanf("%c", &equacao);
	
	printf("Digite o primeiro numero da operacao: ");
	scanf("%f", &numero1);
	
	printf("Digite o segundo numero da operacao: ");
	scanf("%f", &numero2);
		
	result = operacao(equacao, numero1, numero2);
	
	printf("%.f %c %.f = %.2f", numero1, equacao, numero2, result);
	
	return 0;
}