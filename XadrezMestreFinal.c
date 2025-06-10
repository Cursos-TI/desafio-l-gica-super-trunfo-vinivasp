#include <stdio.h>

// Torre com Recursão:
void MoverTorre(int casas){
    int a = 1;
    if (casas > 0){
        printf("Torre movendo %d casa para a direita...\n", a);
        MoverTorre (casas - 1);
    }

}

// Bispo com recursividade de Loops Aninhados: loop externo para o movimento vertical, e o interno para o horizontal.
void MoverBispo(int casas) {
    for (int i = 0; i < casas; i++) { // movimentar verticalmente
        printf("Bispo movendo 1 casa para Cima\n");
        }
        for (int A = 0; A < 5; A++) { // Segundo loop interno movimenta horizontalmente
            printf("Bispo movendo 1 casa para a Direita\n");
        }
    }

// Rainha com Recursividade usando for
void MoverRainha(int casas) {
    int a = 1;
    for (int i = 0; i < casas; i++) { 
        printf("Rainha movendo %d casa para a esquerda\n", a);
    }
}

// Cavalo com Recursividade usando loops aninhados
#include <stdio.h>

void MoverCavalo(int casas) {
    for (int i = 0; i < casas; i++) { 
        for (int j = 0; j < 3; j++) { 
            if (j < 2) { // Primeiros dois passos são para cima
                printf("Cavalo movendo 1 casa para Cima \n");
                continue; // Continua para garantir dois movimentos para cima antes do próximo
            }
            printf("Cavalo movendo 1 casa para Direita \n");
            break; // Finaliza o ciclo atual após o movimento horizontal
        }
    }
}

int main() {

    MoverTorre(5);
    MoverBispo(5);
    MoverRainha(8);
    MoverCavalo(1);
    return 0;
}