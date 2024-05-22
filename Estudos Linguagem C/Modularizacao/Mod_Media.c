/*

Exercicio: Escreva uma função que receba uma letra e 3 notas de um aluno. Se a letra for A, a função deve 
retornar a média aritmética das notas do aluno e se a letra for P, a função deve retornar a sua média 
ponderada com os pesos 5, 3 e 2 respectivamente.

Autor: Georgia Borges Teixeira

*/

#include<stdio.h>

float operacao(char letra, float nota1, float nota2, float nota3){
	
	float media;
	
	switch(letra){
	
		case 'A':
			
			media = (nota1 + nota2 + nota3)/3;
			break;
			
		case 'P':
			
			media = ((nota1*5) + (nota2*3) + (nota3*2))/10;
			break;	
	
	
		default:
			printf("Operacao invalida!");
	}
	
}

int main(){
	
	char l;
	float n[3], result;
	int i;
	
	printf("Insira a operacao que deseja realizar:\n[A] Media\n[P] Media Ponderada\n");
	scanf("%c", &l);
	
	for(i=0; i<3;i++){
		
		printf("Insira a nota %d do aluno: ", i+1);
		scanf("%f", &n[i]);	
		
	}
	
	result = operacao(l, n[0], n[1], n[2]);
	
	printf("\nMedia: %f", result);
	
	return 0;
}