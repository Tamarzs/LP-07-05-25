#include <stdio.h>
#include <string.h>

int main() {
    char palavra1[11];
    int n = 10;
    char palavra2[11];

    printf("\nDigite uma palavra de até 10 letras: ");
    scanf("%s", palavra1);

    printf("\nDigite outra palavra de até 10 letras: ");
    scanf("%s", palavra2);

    printf("Palavra 1 antes: \n");
    for (int i = 0; i < n; i++) {
        printf("%c ", palavra1[i]);
    }
    printf("\n");

    printf("Palavra 2 antes: \n");
    for (int i = 0; i < n; i++) {
        printf("%c ", palavra2[i]);
    }
    printf("\n");

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (palavra1[j] > palavra1[j + 1]) {
                int maior = palavra1[j];
                palavra1[j] = palavra1[j + 1];
                palavra1[j + 1] = maior;
            }
        }
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (palavra2[j] > palavra2[j + 1]) {
                int maior = palavra2[j];
                palavra2[j] = palavra2[j + 1];
                palavra2[j + 1] = maior;
            }
        }
    }

    printf("Palavra 1 depois: \n");
    for (int i = 0; i < n; i++) {
        printf("%c ", palavra1[i]);
    }
    printf("\n");

    printf("Palavra 2 depois: \n");
    for (int i = 0; i < n; i++) {
        printf("%c ", palavra2[i]);
    }
    printf("\n");

    if (strcmp(palavra1, palavra2) == 0) {
        printf("São anagramas!\n");
    } else {
        printf("Não são anagramas!\n");
    }

    return 0;
}