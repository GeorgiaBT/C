/*


Autor: Georgia Borges Teixeira

*/

#include <stdio.h>
#include <string.h>

void mensagem(char msg[], int repete){
	
	int i;
	
	for(i=0; i<repete; i++){
		
		printf("%s\n", msg);
		
	}
	
	printf("A string tem %d caracteres", strlen(msg));
	
}

int soma (int num1, int num2);

int soma (int num1, int num2){
	int s;
	s = num1 + num2;
	return s;
}

int main(){
	
	//char msg[]= "Essa é uma string passada por argumentos";
	mensagem("Essa e uma string passada por argumentos", 9);
	
	printf("\n-----------------------------------\n");
	
	int resultado;
	resultado = soma (3, 5);

	printf ("Resultado: %d", resultado);
	return 0;
}