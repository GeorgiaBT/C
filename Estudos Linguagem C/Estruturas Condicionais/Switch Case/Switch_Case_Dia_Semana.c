/*
Exercicio: Escreva um algoritmo que leia um inteiro entre 1 e 7 e imprima o dia da semana correspondentea este numero, ou seja, “domingo” se 
1, “segunda-feira” se 2, e assim por diante.
Apresente a mensagem “Número inválido!” caso o número digitado não seja inteiro entre 1 e 7.
Use a estrutura ESCOLHA... CASO para o condicional.• Em seguida, transcreva para a linguagem C.

Autor: Georgia Borges Teixeira

*/
#include <stdio.h>
int main(){
    
    int numero;
    
    printf("Digite um número inteiro de 1 a 7: ");
    scanf("%d", &numero);
    
    switch (numero){
        
        case 1:
            printf("O número %d equivale a domingo", numero);
            break;
        case 2:
            printf("O número %d equivale a segunda-feira", numero);
            break;
        case 3:
            printf("O número %d equivale a terca-feira", numero);
            break;
        case 4:
            printf("O número %d equivale a quarta-feira", numero);
            break;
        case 5:
            printf("O número %d equivale a quinta-feira", numero);
            break;
        case 6:
            printf("O número %d equivale a sexta-feira", numero);
            break;
        case 7:
            printf("O número %d equivale a sabado", numero);
            break;
        default:
            ("Opção inválida!");
            break;
        
    }
    
    return 0;
}