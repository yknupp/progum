#include <stdio.h>

#define NUM_TIMES 5
#define NUM_JOGADORES 11

int main() {
    int idade, peso;
    float altura;
    int jogadores_inferior_18 = 0;
    int total_jogadores = NUM_TIMES * NUM_JOGADORES;
    int total_jogadores_mais_80kg = 0;
    float soma_idades_times = 0;
    float soma_alturas = 0;

    for (int i = 0; i < NUM_TIMES; i++) {
        float soma_idades_time = 0;

        for (int j = 0; j < NUM_JOGADORES; j++) {
            printf("Digite a idade, peso e altura do jogador %d do time %d: ", j + 1, i + 1);
            scanf("%d %d %f", &idade, &peso, &altura);

            if (idade < 18) {
                jogadores_inferior_18++;
            }

            if (peso > 80) {
                total_jogadores_mais_80kg++;
            }

            soma_idades_time += idade;
            soma_idades_times += idade;
            soma_alturas += altura;
        }

        float media_idades_time = soma_idades_time / NUM_JOGADORES;
        printf("Média das idades do time %d: %.2f\n", i + 1, media_idades_time);
    }

    float media_idades = soma_idades_times / total_jogadores;
    float media_alturas = soma_alturas / total_jogadores;

    printf("Quantidade de jogadores com idade inferior a 18: %d\n", jogadores_inferior_18);
    printf("Média das idades de todos os jogadores: %.2f\n", media_idades);
    printf("Média das alturas de todos os jogadores: %.2f\n", media_alturas);
    printf("Porcentagem de jogadores com mais de 80kg: %.2f%%\n", (float)total_jogadores_mais_80kg / total_jogadores * 100);

    return 0;
}