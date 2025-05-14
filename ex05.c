#include <stdio.h>

int main() {
    int altura;

    printf("Digite a altura do triângulo: ");
    scanf("%d", &altura);

    printf("Digite a direção (a, d; f para encerrar)");
    char direcao;
    scanf(" %c", &direcao);

    while (direcao != 'f') {

        if (direcao == 'a') {

    for (int i = 1; i <= altura; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
        } else if (direcao == 'd') {
            for (int i = altura; i >= 1; i--) {
                for (int j = 1; j <= i; j++) {
                    printf(" ");
                }
                printf("\n");
            }
        }printf("Digite a direção (a, d; f para encerrar)");
    char direcao;
    scanf(" %c", &direcao);
    return 0;
    }
}