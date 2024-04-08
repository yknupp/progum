#include <stdio.h>

#define NUM_PROFESSORES 8

int main() {
    float salarios[NUM_PROFESSORES];
    int idades[NUM_PROFESSORES];
    float maiorSalario = 0;
    int indiceMenorSalario = 0;
    int numProfessoresAcima40ComSalarioAcima5000 = 0;

    // Ler salários e idades de cada professor
    for (int i = 0; i < NUM_PROFESSORES; i++) {
        printf("Informe o salário do professor %d: ", i + 1);
        scanf("%f", &salarios[i]);

        printf("Informe a idade do professor %d: ", i + 1);
        scanf("%d", &idades[i]);

        if (salarios[i] > maiorSalario) {
            maiorSalario = salarios[i];
        }

        if (salarios[i] < salarios[indiceMenorSalario]) {
            indiceMenorSalario = i;
        }

        if (idades[i] > 40 && salarios[i] > 5000) {
            numProfessoresAcima40ComSalarioAcima5000++;
        }
    }

    printf("O maior salário é: %.2f\n", maiorSalario);
    printf("A idade do professor com menor salário é: %d\n", idades[indiceMenorSalario]);
    printf("Número de professores acima de 40 anos com salário acima de R$5.000,00: %d\n", numProfessoresAcima40ComSalarioAcima5000);

    return 0;
} 
