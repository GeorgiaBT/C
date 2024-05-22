#include <stdio.h>
int main(){
    
    int votosBrancos, votosNulos, votosValidos, total;
    
    printf("Insira a quantidade de votos brancos: ");
    scanf("%d", & votosBrancos); 
    
    printf("\nInsira a quantidade de votos nulos: ");
    scanf("%d", & votosNulos);
    
    printf("\nInsira a quantidade de votos validos: ");
    scanf("%d", & votosValidos);
    
    total = votosBrancos + votosNulos + votosValidos;
    
    votosBrancos = (votosBrancos*100)/total;
    votosNulos = (votosNulos*100)/total;
    votosValidos = (votosValidos*100)/total;
    
    
    printf("\nTotal de votos: %d", total);
    printf("\nVotos brancos: %d%c", votosBrancos , '%');
    printf("\nVotos nulos: %d%c", votosNulos ,'%');
    printf("\nVotos validos: %d%c", votosValidos , '%');
    
    return 0;
}