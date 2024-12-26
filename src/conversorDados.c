#include <stdio.h>
#include "conversorDados.h"

void menuConversorDados() {
    int opcao;
    float valor, resultado;

    do {
        printf("\nConversor de Dados Digitais\n");
        printf("1. Bits para Bytes\n");
        printf("2. Bytes para Bits\n");
        printf("3. Kilobytes para Bytes\n");
        printf("4. Bytes para Kilobytes\n");
        printf("5. Megabytes para Kilobytes\n");
        printf("6. Kilobytes para Megabytes\n");
        printf("7. Gigabytes para Megabytes\n");
        printf("8. Megabytes para Gigabytes\n");
        printf("9. Terabytes para Gigabytes\n");
        printf("10. Gigabytes para Terabytes\n");
        printf("0. Voltar ao menu principal\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao >= 1 && opcao <= 10) {
            printf("Digite o valor a ser convertido: ");
            scanf("%f", &valor);
        }

        switch (opcao) {
            case 1:
                resultado = bitsParaBytes(valor);
                break;
            case 2:
                resultado = bytesParaBits(valor);
                break;
            case 3:
                resultado = kilobytesParaBytes(valor);
                break;
            case 4:
                resultado = bytesParaKilobytes(valor);
                break;
            case 5:
                resultado = megabytesParaKilobytes(valor);
                break;
            case 6:
                resultado = kilobytesParaMegabytes(valor);
                break;
            case 7:
                resultado = gigabytesParaMegabytes(valor);
                break;
            case 8:
                resultado = megabytesParaGigabytes(valor);
                break;
            case 9:
                resultado = terabytesParaGigabytes(valor);
                break;
            case 10:
                resultado = gigabytesParaTerabytes(valor);
                break;
            case 0:
                printf("Voltando ao menu principal...\n");
                continue;
            default:
                printf("Opcao invalida. Tente novamente.\n");
                continue;
        }

        if (opcao >= 1 && opcao <= 10) {
            printf("Resultado: %.10f\n", resultado);
        }
    } while (opcao != 0);
}

float bitsParaBytes(float bits) {
    return bits / 8;
}

float bytesParaBits(float bytes) {
    return bytes * 8;
}

float kilobytesParaBytes(float kilobytes) {
    return kilobytes * 1024;
}

float bytesParaKilobytes(float bytes) {
    return bytes / 1024;
}

float megabytesParaKilobytes(float megabytes) {
    return megabytes * 1024;
}

float kilobytesParaMegabytes(float kilobytes) {
    return kilobytes / 1024;
}

float gigabytesParaMegabytes(float gigabytes) {
    return gigabytes * 1024;
}

float megabytesParaGigabytes(float megabytes) {
    return megabytes / 1024;
}

float terabytesParaGigabytes(float terabytes) {
    return terabytes * 1024;
}

float gigabytesParaTerabytes(float gigabytes) {
    return gigabytes / 1024;
}
