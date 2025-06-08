#include <stdio.h>

int main() {
    
    int a = 1;
    int r = 0;
    int b = 0;
    int c = 1;

    //codigo para vover a torre 5 casas para a direita.
    for (int i = 0; i < 5; i++) {
        printf("Torre movendo %d casa para a direita...\n", a);
    }

    //codigo para mover o bispo 5 casas para cima e para direita
    
    while (b<5)
    {
        printf("Bispo movendo %d casa para cima e %d casa para direita\n",a, a);
        b++;
    }

    //codigo para mover a rainha 8 casas para a esquerda usando while

    do
    {
        printf("Rainha movendo %d casa para a esquerda\n", a);
        r++;
    } while (r < 8);

    //codigo para mover o cavalo 2 casas para baixo e 1 casa para a esquerda

    while (c < 2)
    {
        for (int i; i < 2; i++)
        {
            printf("Cavalo movendo %d casa para baixo\n", a);
        }/* code */
    
    printf("Cavalo movendo  %d casa para a esquerda\n", a);
    c++;
    }
    

    return (0);

}

