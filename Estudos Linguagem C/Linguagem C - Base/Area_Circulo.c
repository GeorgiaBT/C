#include<stdio.h>
int main(){
    
    //declarando variaveis
    float pi, raio, area;
    
    pi= 3.14;
    
    printf("Insira o raio da circunferencia: ");
    scanf("%f", &raio);
    
    area = pi*raio*raio;
    
    printf("A área da circunferencia e: %.2f", area);
    
    
    return 0;
}