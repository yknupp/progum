#include <stdio.h>

int main() {
    int senhaCorreta = 1234;
    int senhaDigitada;

    do {
        printf("Digite a senha: ");
        scanf("%d", &senhaDigitada);
    } while (senhaDigitada != senhaCorreta);

    printf("Senha Correta\n");

    return 0;
}