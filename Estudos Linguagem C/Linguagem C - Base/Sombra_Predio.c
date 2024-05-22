#include <stdio.h>
int main(){
    
    float minhaSombra, sombraPredio, minhaAltura, alturaPredio;
    
    printf("Qual é a medida da sua sombra?\n");
    scanf("%f", & minhaSombra);
    
    printf("Qual é a medida da sombra do predio?\n");
    scanf("%f", & sombraPredio);
    
    printf("Qual é a medida da sua altura?\n");
    scanf("%f", & minhaAltura);
    
    alturaPredio = (minhaAltura*sombraPredio)/(minhaSombra);
    
    printf("A altura do prédio é igual a %.2f metros",alturaPredio);
    
    return 0;
}