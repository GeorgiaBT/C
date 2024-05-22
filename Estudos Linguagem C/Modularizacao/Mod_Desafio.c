/*

Autor: Georgia Borges Teixeira

*/

#include<stdio.h>
#include<string.h>

void mensagem(char msg[], int repete);
	
void mensagem(char msg[], int repete){
	
	int i;
	
	for(i=0;i<repete;i++){
		
		printf("%s\n", msg);
		
	}
	
	printf("%d", strlen(msg));
	
}
	

int main(){

	mensagem("String passada por argumento", 6);
	
	return 0;
}