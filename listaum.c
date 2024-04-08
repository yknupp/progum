#include <stdio.h>

int main() {
    int numero;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    if (numero % 2 == 0) {
        printf("O número %d é par.\n", numero);

        if (numero > 15){
            printf("O número %d é maior que 15.\n");
        }

    } else {
        printf("O número %d é ímpar.\n", numero);

        if (numero < 50){
            printf("O número %d é menor que 50.\n");
        }
    }

    return 0;
}