#include <stdio.h>

int main() {
    float morangos, macas, valorTotal, desconto;

    printf("Digite a quantidade de morangos (em Kg): ");
    scanf("%f", &morangos);

    printf("Digite a quantidade de maçãs (em Kg): ");
    scanf("%f", &macas);

    if (morangos <= 5) {
        valorTotal = morangos * 7.50;
    } else {
        valorTotal = morangos * 5.30;
    }

    if (macas <= 5) {
        valorTotal += macas * 3.50;
    } else {
        valorTotal += macas * 2.80;
    }

    if (valorTotal > 19.00) {
        desconto = valorTotal * 0.08;
        valorTotal -= desconto;
    }

    printf("Valor a ser pago pelo cliente: R$ %.2f\n", valorTotal);

    return 0;
}