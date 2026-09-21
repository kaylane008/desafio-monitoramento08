#include <stdio.h>

int main() {

    float limite, temperatura;
    float soma = 0, maior = 0, menor = 0, media;
    int quantidade = 0;
    int consecutivas = 0;

    // Solicita e valida o limite
    do {
        printf("Digite o limite de temperatura: ");

        if (scanf("%f", &limite) != 1) {
            printf("Entrada invalida! Digite um numero.\n");

            while (getchar() != '\n');

            limite = -1;
        }

        if (limite < 0) {
            printf("O limite deve ser maior ou igual a zero.\n");
        }

    } while (limite < 0);

    // Recebe as temperaturas
    while (consecutivas < 3) {

        printf("\nDigite a temperatura: ");

        if (scanf("%f", &temperatura) != 1) {

            printf("Entrada invalida! Digite um numero.\n");

            while (getchar() != '\n');

            continue;
        }

        soma = soma + temperatura;
        quantidade++;

        // Primeira temperatura
        if (quantidade == 1) {
            maior = temperatura;
            menor = temperatura;
        }

        // Verifica maior temperatura
        if (temperatura > maior) {
            maior = temperatura;
        }

        // Verifica menor temperatura
        if (temperatura < menor) {
            menor = temperatura;
        }

        // Verifica se esta acima do limite
        if (temperatura > limite) {

            consecutivas++;

            printf("ALERTA! Temperatura acima do limite.\n");
            printf("Temperaturas consecutivas acima: %d\n", consecutivas);

        } else {

            consecutivas = 0;

            printf("Temperatura dentro do limite.\n");
        }
    }

    // Calcula a media
    media = soma / quantidade;

    // Relatorio final
    printf("\n========== RELATORIO FINAL ==========\n");
    printf("Limite de temperatura: %.2f\n", limite);
    printf("Quantidade de leituras validas: %d\n", quantidade);
    printf("Media: %.2f\n", media);
    printf("Maior temperatura: %.2f\n", maior);
    printf("Menor temperatura: %.2f\n", menor);
    printf("Monitoramento encerrado apos 3 temperaturas consecutivas acima do limite.\n");

    return 0;
}
