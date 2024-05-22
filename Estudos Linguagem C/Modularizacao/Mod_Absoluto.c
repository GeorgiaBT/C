/*

Exercicio: Escreva um codigo que retorne o numero absoluto

Autor: Georgia Borges Teixeira

*/

#include<stdio.h>

//prototipos

int entrada_dados();
int absoluto (int a);
//procedimentos e funcoes
int entrada_dados(){
	
	int entrada;
	printf("Insira um numero: ");
	scanf("%d",& entrada);
	return entrada;
}

int absoluto (int a){
	
	if(a<0){
		
		a= a*-1;
		
	}
	
	return a;
	
}

void imprimeInt(int p){
	
	printf("%d", p);
	
}


int main(){
	
	int num, abs;
	num= entrada_dados();
	abs=absoluto(num);
	imprimeInt(abs);	
	
	return 0;
}