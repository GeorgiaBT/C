//Problema: Criar um programa em C que calcule o ICMS de um produto a partir do seu valor.Declare o ICMS em18% fixo.
//Autor: Geórgia Borges Teixeira

#include <stdio.h>
    int main(){
    
    float taxaicms, valorproduto, icms, valortotal;
    
    printf("Insira o valor do produto: ");
    scanf("%f", & valorproduto );
    
    taxaicms = 0.18;
    
    icms = valorproduto * taxaicms;
    
    valortotal = icms + valorproduto;
    
    printf("O valor do ICMS e %.2f", icms);
    printf("O valor do produto + ICMS e %.2f", valortotal);
    return 0;
}