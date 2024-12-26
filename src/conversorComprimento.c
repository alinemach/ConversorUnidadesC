#include <stdio.h>
#include "conversorComprimento.h"

void menuConversorComprimento() {
    int opcao;
    float valor, resultado;

    do {
        printf("\nConversor de Comprimento\n");
        printf("1. Metros para Quilômetros\n");
        printf("2. Metros para Centímetros\n");
        printf("3. Quilômetros para Metros\n");
        printf("4. Quilômetros para Milhas\n");
        printf("5. Milhas para Quilômetros\n");
        printf("6. Centímetros para Metros\n");
        printf("0. Voltar ao menu principal\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao >= 1 && opcao <= 6) {
            printf("Digite o valor a ser convertido: ");
            scanf("%f", &valor);
        }

        switch (opcao) {
            case 1:
                resultado = metrosParaQuilometros(valor);
                break;
            case 2:
                resultado = metrosParaCentimetros(valor);
                break;
            case 3:
                resultado = quilometrosParaMetros(valor);
                break;
            case 4:
                resultado = quilometrosParaMilhas(valor);
                break;
            case 5:
                resultado = milhasParaQuilometros(valor);
                break;
            case 6:
                resultado = centimetrosParaMetros(valor);
                break;
            case 0:
                printf("Voltar ao menu principal...\n");
                continue;
            default:
                printf("Opcao invalida. Tente novamente.\n");
                continue;
        }

        if (opcao >= 1 && opcao <= 6) {
            printf("Resultado: %.2f\n", resultado);
        }
    } while (opcao != 0);
}

float metrosParaQuilometros(float metros) {
    return metros / 1000;
}

float metrosParaCentimetros(float metros) {
    return metros * 100;
}

float quilometrosParaMetros(float quilometros) {
    return quilometros * 1000;
}

float quilometrosParaMilhas(float quilometros) {
    return quilometros * 0.621371;
}

float milhasParaQuilometros(float milhas) {
    return milhas / 0.621371;
}

float centimetrosParaMetros(float centimetros) {
    return centimetros / 100;
}
