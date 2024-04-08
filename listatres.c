#include <stdio.h>

int main() {
    int numero, soma = 0, quantidade = 0;

    printf("Digite os numeros (0 para finalizar):\n");

    do {
        scanf("%d", &numero);

        if (numero % 2 == 0) {
            soma += numero;
            quantidade++;
        }
    } while (numero != 0);

    if (quantidade > 0) {
        float media = (float) soma / quantidade;
        printf("A media dos numeros pares digitados e: %.2f\n", media);
    } else {
        printf("Nenhum numero par foi digitado.\n");
    }

    return 0;
}