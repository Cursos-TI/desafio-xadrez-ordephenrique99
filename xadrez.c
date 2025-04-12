#include <stdio.h>

int main() {
 
    int torre = 5, bispo = 5, rainha = 8;
    int movimentos;
 
    while(movimentos<torre){ 
        movimentos++;
        printf("Movimento Torre %d - DIREITA\n", movimentos);
    }

    printf("\n");
    do{
        movimentos++;
        printf("Movimento Bispo %d - CIMA/DIREITA\n", movimentos);
    }while(movimentos<bispo);

 
 
 
 
 


    return 0;
}