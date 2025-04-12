#include <stdio.h>

int main() {
 
    int torre = 5, bispo = 5, rainha = 8;       //VÁRIAVÉS PARA DEFINIR QUANTIDADE DE MOVIMENTOS
    int movimentos = 1;                         //VÁRIAVEL CONTROLE DE MOVIMENTOS E INCREMENTO
 
    //WHILE - MOVIMENTOS DA TORRE
    while(movimentos<=torre){                   //DEFININDO INICIO E CONDIÇÃO DE CONTROLE
        printf("Movimento Torre %d - DIREITA\n", movimentos);   //PRINT O TEXTO COM O NÚMERO DO MOVIMENTO E DIREÇÃO
        movimentos++;                                           //INCREMENTO PARA CONTROLE
    }

    printf("\n");       //PULA LINHA PARA DIVIDIR APRESENTAÇÃO DE MOVIMENTOS
    movimentos = 1;     //REINICIALIZANDO A VÁRIAVEL DE CONTROLE
    //DO WHILE - MOVIMENTOS DO BISPO
    do{
        printf("Movimento Bispo %d - CIMA/DIREITA\n", movimentos);  //PRINT O TEXTO COM NÚMERO DO MOVIMENTO E DIREÇÃO
        movimentos++;                                               //INCREMENTO DE CONTROLE
    }while(movimentos<=bispo);      //VERIFICAÇÃO DA CONDIÇÃO PARA EXECUÇÃO DO BLOCO


    printf("\n");       //PULA LINHA PARA DIVIDIR APRESENTAÇÃO DE MOVIMENTOS
    for(movimentos=1;movimentos<=rainha;movimentos++){          //INICIALIZAÇÃO DA VÁRIAVEL CONTROLE, DEFINIÇÃO DE PARADA E INCREMENTO
        printf("Movimento Rainha %d - ESQUERDA\n", movimentos); //PRINT O TEXTO COM NÚMERO DO MOVIMENTO E DIREÇÃO
    }
    
    return 0;
}