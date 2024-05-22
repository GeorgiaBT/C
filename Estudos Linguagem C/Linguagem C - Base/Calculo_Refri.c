#include <stdio.h>
int main(){
    
    int garrafa350,garrafa600,garrafa2l;
    float litrosrefri;
    
    printf("Quantas garrafas de 350mL de refri foram compradas?\n");
    scanf("%d", & garrafa350);
    
    printf("\nQuantas garrafas de 600mL de refri foram compradas?\n");
    scanf("%d", & garrafa600);
    
    printf("\nQuantas garrafas de 2L de refri foram compradas?\n");
    scanf("%d", & garrafa2l);
    
    litrosrefri = (garrafa350*0.35) + (garrafa600*0.6) + (garrafa2l*2);
    
    printf("\nForam comprados %.2f", litrosrefri, "L de refrigerante.\n");
    return 0;
}