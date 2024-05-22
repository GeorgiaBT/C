/*
Exercicio: Escreva um programa em C que mostre ao usuário um menu com 4 opções de operaçõesmatemáticas, as mais básicas, peça dois valores 
numéricos, realize o cálculo, e mostre oresultado na tela.
Use a estrutura ESCOLHA... CASO para o condicional.
Lembre-se que divisão por zero não é possível.

Autor: Georgia Borges Teixeira

*/
#include <stdio.h>
int main(){
    
    char operacao;
    float num1,num2, resultado;
    
    printf("+ - Soma");
    printf("\n- - Subtracao");
    printf("\n* - Multiplicacao");
    printf("\n/ - Divisao");
    printf("\nInsira o simbolo da operacao que deseja realizar: ");
    scanf("%c", &operacao);
    
    printf("Insira o primeiro numero da operacao: ");
    scanf("%f", &num1);
    
    printf("Insira o segundo numero da operacao: ");
    scanf("%f", &num2);
    
    switch (operacao){
        case '+':
            resultado = num1 + num2;
            printf("O resultado da soma entre %.1f e %.1f e igual a %.1f", num1, num2, resultado);
            break;
        case '-':
            resultado = num1 - num2;
            printf("O resultado da subtracao entre %.1f e %.1f e igual a %.1f", num1, num2,resultado);
            break;
        case '*':
            resultado = num1 * num2;
            printf("O resultado da multiplicacao entre %.1f e %.1f e igual a %.1f", num1, num2,resultado);
            break;
        case '/':
            if (num2 != 0){
            
                resultado = num1 / num2;
                printf("O resultado da divisao entre %.1f e %.1f e igual a %.1f", num1, num2, resultado);
                
            }else{
                printf("Operacao invalida!");
            }
            break;
        default:
            printf("Operacao invalida!");
            break;
    }
    
    
    return 0;
}