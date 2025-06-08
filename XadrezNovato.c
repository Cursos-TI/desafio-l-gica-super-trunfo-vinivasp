#include <stdio.h>

int main() {
    
    int a = 1;
    int r = 0;
    int b = 0;

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

    do
    {
        printf("Rainha movendo %d casa para a esquerda\n", a);
        r++;
    } while (r < 8);

}

