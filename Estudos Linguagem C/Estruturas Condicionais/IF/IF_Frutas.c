/*
Autor: Georgia Borges Teixeira
*/
#include <stdio.h>
int main(){
 
    float kg_morango, kg_maca, valor_morango, valor_maca, total;
 
    printf("Quantos quilogramas de morango foram comprados?");
    scanf("%f", &kg_morango);
    
    printf("Quantos quilogramas de maca foram comprados?");
    scanf("%f", &kg_maca);
    
    if (kg_morango <= 5){
        valor_morango = kg_morango*6.5;
    }else {
        valor_morango = kg_morango*6.2; 
    }
    
    if (kg_maca <= 5){
        valor_maca = kg_maca*3.8;
    }else {
        valor_maca = kg_maca*3.5; 
    }
    
    total = valor_morango + valor_maca;
    
    printf("O valor a ser pago é %.2f", total);
    return 0;
}