#include <stdio.h>

void consultarPreco(int codigo) {
    switch (codigo) {
        case 123:
            printf("Carro: FERRARI\n");
            printf("Valor: 5.000.000,00\n");
            break;
        case 456:
            printf("Carro: VOLVO\n");
            printf("Valor: 700.000,00\n");
            break;
        case 654:
            printf("Carro: MUSTANG\n");
            printf("Valor: 800.000,00\n");
            break;
        default:
            printf("Código de veículo inválido!\n");
            break;
    }
}

void efetuarVenda(int codigo, int quantidade, float *faturamento) {
    float valor;
    switch (codigo) {
        case 123:
            valor = 5000000.00;
            break;
        case 456:
            valor = 700000.00;
            break;
        case 654:
            valor = 800000.00;
            break;
        default:
            printf("Código de veículo inválido!\n");
            return;
    }
    float total = valor * quantidade;
    *faturamento += total;
    printf("Valor total da venda: %.2f\n", total);
}

int main() {
    int opcao, codigo, quantidade;
    float faturamento = 0.0;

    do {
        printf("VENDART VEÍCULOS DE LUXO\n");
        printf("1 - Consultar preço de um veículo\n");
        printf("2 - Efetuar uma venda\n");
        printf("3 - Mostrar faturamento de hoje\n");
        printf("4 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Informe o código do veículo: ");
                scanf("%d", &codigo);
                consultarPreco(codigo);
                break;
            case 2:
                printf("Informe o código do veículo: ");
                scanf("%d", &codigo);
                printf("Informe a quantidade vendida: ");
                scanf("%d", &quantidade);
                efetuarVenda(codigo, quantidade, &faturamento);
                break;
            case 3:
                printf("Faturamento de hoje: %.2f\n", faturamento);
                break;
            case 4:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida!\n");
                break;
        }
    } while (opcao != 4);

    return 0;
}