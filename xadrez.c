#include <stdio.h>

int main() {

    // Declarando as variaveis já iniciadas.
    int torre = 0, bispo = 0, rainha = 0;

    printf("##### Movimentos da Torre #####\n\n");
    
    // O movimento da torre sempre é na vertical e horizontal
    while (torre <= 5)
    {


        printf("Cima\n");
        torre++;
    }

    // O movimento do bispo segue um padrão: cima e direita, cima e esquerda, baixo esquerda e baixo direita. 
    printf("\n");
    printf("##### Movimentos do Bispo #####\n\n");
    do
    {
        printf("Cima e Direita\n");
        bispo++;
    } while (bispo <= 5);

    // A rainha por sua vez pode ir em qualquer direção, senda assim a peça mais poderosa do jogo.
    printf("\n");
    printf("##### Movimentos da Rainha #####\n\n");
    for (int i = 0; i <= 7; i++)
    {
        rainha++;
        printf("Esquerda\n", rainha);
    }
    
    printf("\n");

    // Movimento do Cavalo em L.
    printf("##### Movimentos do Cavalo #####\n\n");

    // Usando o loop aninhado
    for (int c = 0; c < 2; c++) { 
        // Duas casas para baixo
        printf("Baixo\n");
        int cavalo = 0;

        // Apenas após as duas casas para baixo, move uma para a esquerda
        while (cavalo < 1 && c == 1) {
            cavalo++;
            printf("Esquerda\n");
        } 
    }
    return 0;
}
