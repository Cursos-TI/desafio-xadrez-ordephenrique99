#include <stdio.h>

int main() {
 
    int torre = 5, bispo = 5, rainha = 8;
    int movimentos = 1;
 
    while(movimentos<=torre){ 
        printf("Movimento Torre %d - DIREITA\n", movimentos);
        movimentos++;
    }

    printf("\n");
    movimentos = 1;
    do{
        printf("Movimento Bispo %d - CIMA/DIREITA\n", movimentos);
        movimentos++;
    }while(movimentos<=bispo);

    printf("\n");
    movimentos = 1;
    for(movimentos=1;movimentos<=rainha;movimentos++){
        printf("Movimento Rainha %d - ESQUERDA\n", movimentos);
    }

 
 
 
 
 


    return 0;
}