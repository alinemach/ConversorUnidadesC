#include <stdio.h>
#include "conversorVolume.h"

float litrosParaMililitros(float litros) { 
    return litros * 1000.0; 
}
float mililitrosParaLitros(float mililitros) { 
    return mililitros / 1000.0; 
}
float litrosParaGaloes(float litros) { 
    return litros * 0.264172; 
}
float galoesParaLitros(float galoes) { 
    return galoes / 0.264172; 
}
float metrosCubicosParaLitros(float metrosCubicos) { 
    return metrosCubicos * 1000.0; 
}
float litrosParaMetrosCubicos(float litros) { 
    return litros / 1000.0; 
}

void menuConversorVolume() {
    int opcao;
    float valor, resultado;

    do {
        printf("\nConversor de Volume\n");
        printf("1. Litros para Mililitros\n");
        printf("2. Mililitros para Litros\n");
        printf("3. Litros para Galoees\n");
        printf("4. Galoes para Litros\n");
        printf("5. Metros cubicos para Litros\n");
        printf("6. Litros para Metros cubicos\n");
        printf("0. Voltar ao menu principal\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao >= 1 && opcao <= 6) {
            printf("Digite o valor a ser convertido: ");
            scanf("%f", &valor);
        }
        switch (opcao) {
            case 1:
                resultado = litrosParaMililitros(valor);
                break;
            case 2:
                resultado = mililitrosParaLitros(valor);
                break;
            case 3:
                resultado = litrosParaGaloes(valor);
                break;
            case 4:
                resultado = galoesParaLitros(valor);
                break;
            case 5:
                resultado = metrosCubicosParaLitros(valor);
                break;
            case 6:
                resultado = litrosParaMetrosCubicos(valor);
                break;
            case 0:
                printf("Voltando ao menu principal...\n");
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