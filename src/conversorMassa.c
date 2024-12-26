#include <stdio.h>
#include "conversorMassa.h"

void menuConversorMassa() {
    int opcao;
    float valor, resultado;

    do {
        printf("\nConversor de Massa\n");
        printf("1. Quilograma para Grama\n");
        printf("2. Quilograma para Tonelada\n");
        printf("3. Grama para Quilograma\n");
        printf("4. Grama para Tonelada\n");
        printf("5. Tonelada para Quilograma\n");
        printf("6. Tonelada para Grama\n");
        printf("0. Voltar ao menu principal\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao >= 1 && opcao <= 6) {
            printf("Digite o valor a ser convertido: ");
            scanf("%f", &valor);
        }
        switch (opcao) {
            case 1:
                resultado = quilogramaParaGrama(valor);
                break;
            case 2:
                resultado = quilogramaParaTonelada(valor);
                break;
            case 3:
                resultado = gramaParaQuilograma(valor);
                break;
            case 4:
                resultado = gramaParaTonelada(valor);
                break;
            case 5:
                resultado = toneladaParaQuilograma(valor);
                break;
            case 6:
                resultado = toneladaParaGrama(valor);
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

float quilogramaParaGrama(float quilogramas) {
    return quilogramas * 1000.0;
}

float quilogramaParaTonelada(float quilogramas) {
    return quilogramas / 1000.0;
}

float gramaParaQuilograma(float gramas) {
    return gramas / 1000.0;
}

float gramaParaTonelada(float gramas) {
    return gramas / 1000000.0;
}

float toneladaParaQuilograma(float toneladas) {
    return toneladas * 1000.0;
}

float toneladaParaGrama(float toneladas) {
    return toneladas * 1000000.0;
}
