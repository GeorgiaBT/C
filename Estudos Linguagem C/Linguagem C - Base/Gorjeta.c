#include <stdio.h>
int main(){
    
    //declarando variaveis
    float valorGasto, valorGorjeta, total;
    
    //entrada de dados
    printf("Insira o valor gasto pelo cliente: ");
    scanf("%f", & valorGasto);
    
    //calculos
    valorGorjeta = valorGasto*0.1;
    total = valorGasto + valorGorjeta;
    
    //imprimindo valores
    printf("\nValor gasto: %.2f", valorGasto);
    printf("\nValor da Gorjeta: %.2f",valorGorjeta);
    printf("\nValor total: %.2f",total);
    
    return 0;
}