/*
Exercicio: Uma empresa decide dar um aumento aos seus funcionários de acordo com as tabelas desalario atual e tempo de serviço de um 
funcionário.
 Escreva um algoritmo em pseudocódigo que leia o valor do salario atual e o tempo de serviçode um funcionário na empresa,
 calcule o novo salario desse funcionário e apresente o resultadona tela
 Em seguida, transcreva o programa para a linguagem C.

Autor: Georgia Borgs Teixeira

*/
#include <stdio.h>

int main(){
 
    float salarioAtual, tempoServico, novoSalario;
    
    printf("Qual o seu salario? ");
    scanf("%f", &salarioAtual);
    
    printf("Qual o seu tempo de servico? (Em anos) ");
    scanf("%f", &tempoServico);
    
    if (salarioAtual <=500){
    
        novoSalario = salarioAtual + (salarioAtual*25)/100;
    
    }else if (salarioAtual <=1000){
    
        novoSalario = salarioAtual + (salarioAtual*20)/100;
    
    }else if(salarioAtual <=1500){
    
        novoSalario = salarioAtual + (salarioAtual*15)/100;
    
    
    }else if(salarioAtual <=2000){
    
        novoSalario = salarioAtual + (salarioAtual*10)/100;
    
    }else{
    
        novoSalario = salarioAtual;
    
    }
    
    if (tempoServico <1){
    
        novoSalario = novoSalario;
    
    }else if(tempoServico <4){
    
        novoSalario = novoSalario + 100;
    
    }else if(tempoServico <7){
    
        novoSalario = novoSalario +200;
    
    }else if(tempoServico <10){
    
        novoSalario = novoSalario +300;
    
    }else{
    
        novoSalario = novoSalario +500;
    
    }
    
    printf("O salario antigo é %.2f", salarioAtual);
    printf("O salario com o reajuste é %.2f", novoSalario);
    
    return 0;
}