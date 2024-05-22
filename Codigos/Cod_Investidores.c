/*

Nome: Georgia Borges Teixeira

*/

#include<stdio.h>

void menu(){
	
	printf("\n[1] Poupança");
	printf("\n[2] CDB");
	printf("\n[3] Fundos de Renda");
	printf("\nInsira o tipo de conta do cliente: ");
	
}

int main (){
	
	//declarando as variaves 
	int  sexo, tipoConta, valorInvestido, totalClientes, clientesH, clientesM;
	float  somaValores, mediaValores, porcentagemCDB;
	
	//atribindo valores as variaveis para evitar erros 
	clientesH=0;

	//iniciando a estrutura de repeticao
	do{
		
		//pedindo para o usuario inserir os valores
		printf("Insira o valor investido pelo cliente: ");
		scanf("%d", &valorInvestido);
		
		if(valorInvestido<=0){
			
			valorInvestido=0;
			printf("\nPROGRAMA ENCERRADO!\n");
			
		}else{
				
			menu();
			scanf("%d", &tipoConta);
			
			while(tipoConta<1 || tipoConta>3 ){
				printf("\nOpcao Invalida!");
				//pedindo para o usuario inserir os valores
				menu();
				scanf("%d", &tipoConta);
				
			}
			
			//estrutura condicional para verificar dados
			if (tipoConta == 1 || tipoConta==3){
				
				totalClientes++;
				
			}else if (tipoConta == 2){
				
				totalClientes++;
				porcentagemCDB++;
				
			}
			
				//pedindo para o usuario inserir os valores
			printf("\nInsira o sexo do cliente(1 para Feminino - 2 para Masculino): \n");
			scanf("%d", &sexo);
			
			while (sexo<1 || sexo>2){
				
				printf("\nSexo Invalido!");
				
				printf("\nInsira o sexo do cliente(1 para Feminino - 2 para Masculino): ");
				scanf("%d", &sexo);
				
			}
		
			//estrutura condicional para verificar dados
			if (sexo == 1){
				
				clientesM++;
				
			}else if (sexo == 2){
				
				clientesH++;
				
			}
		
			
			//atribuindo valores a uma variavel
			somaValores +=valorInvestido;
		
			printf("\n--------------------------------------------------\n");
				
		}

	//fim da estrutura de repeticao
	
	//loop em while
	}while(valorInvestido>0);
	
	//atribuindo valores a uma variavel
	mediaValores = somaValores/totalClientes;
	
	porcentagemCDB = (porcentagemCDB/totalClientes)*100;
	
	//imprimindo dados na tela
	printf("\nTotal de clientes: %d",totalClientes );
	printf("\nQuantidade de clientes homens: %d",clientesH );
	printf("\nQuantidade de clientes mulheres: %d",clientesM );
	printf("\nMedia dos valores investidos pelos clientes: %.2f",mediaValores );
	printf("\nInvestimentos em CDB: %.2f%%",porcentagemCDB );
	
	//estrutura condicional para imprimir mensagem especifica na tela
	if(mediaValores<1500){
		
		printf("\nGrupo de investimento: BAIXO" );
		
	}else if(mediaValores<5000){
		
		printf("\nGrupo de investimento: MEDIO" );
		
	}else{
		
		printf("\nGrupo de investimento: ALTO" );
		
	}
	
	return 0;
}