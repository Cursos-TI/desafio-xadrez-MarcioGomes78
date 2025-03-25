#include <stdio.h>

// função para mover a torre para a direita
void moverTorre(int casas)
{
    if (casas > 0) // condição
    {
        printf("Direita\n");
        moverTorre(casas - 1); // chama a si mesma
    }
}

void moverBispo(int casas)
{
    if (casas > 0)
    {
        printf("Cima e direita\n");
        moverBispo(casas - 1);
    }
}

void moverRainha(int casas)
{
    if (casas > 0)
    {
        printf("Esquerda\n");
        moverRainha(casas - 1);
    }
}

int main() {

    printf("### Movimento da Torre ###\n\n");
    moverTorre(5);

    printf("### Movimento da Bispo ###\n\n");
    moverBispo(5);

    printf("### Movimento da Rainha ###\n\n");
    moverRainha(8);

    printf("### Movimento do Cavalo ###\n\n");
    for (int i = 0; i < 2; i++)
    {
        printf("Cima\n");
    }

    for (int j = 0; j < 1; j++)
    {
        printf("Direita\n");
    }

    return 0;
}
