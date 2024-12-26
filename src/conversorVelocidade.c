#include <stdio.h>
#include "conversorVelocidade.h"

void menuConversorVelocidade() {
    int opcao;
    float valor, resultado;

    do {
        printf("\nConversor de Velocidade\n");
        printf("1. Quilometros por hora para Metros por segundo\n");
        printf("2. Metros por segundo para Quilômetros por hora\n");
        printf("3. Quilômetros por hora para Milhas por hora\n");
        printf("4. Milhas por hora para Quilômetros por hora\n");
        printf("5. Metros por segundo para Milhas por hora\n");
        printf("6. Milhas por hora para Metros por segundo\n");
        printf("0. Voltar ao menu principal\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao >= 1 && opcao <= 6) {
            printf("Digite o valor a ser convertido: ");
            scanf("%f", &valor);
        }

        switch (opcao) {
            case 1:
                resultado = kmporhoraParamporseg(valor);
                break;
            case 2:
                resultado = mporsegParakmporhora(valor);
                break;
            case 3:
                resultado = kmporhoraParamilhasporhora(valor);
                break;
            case 4:
                resultado = milhasporhoraParakmporhora(valor);
                break;
            case 5:
                resultado = mporsegParamilhasporhora(valor);
                break;
            case 6:
                resultado = milhasporhoraParamporseg(valor);
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

float kmporhoraParamporseg(float kmporhora) {
    return kmporhora / 3.6;
}

float mporsegParakmporhora(float mporseg) {
    return mporseg * 3.6;
}

float kmporhoraParamilhasporhora(float kmporhora) {
    return kmporhora / 1.609;
}

float milhasporhoraParakmporhora(float milhasporhora) {
    return milhasporhora * 1.609;
}

float mporsegParamilhasporhora(float mporseg) {
    return mporseg * 2.237;
}

float milhasporhoraParamporseg(float milhasporhora) {
    return milhasporhora / 2.237;
}
