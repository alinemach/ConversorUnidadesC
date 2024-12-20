#include <stdio.h>
#include "conversorEnergia.h"

void menuConversorEnergia() {
    int opcao;
    float valor, resultado;

    do {
        printf("\nConversor de Energia\n");
        printf("1. Joule para Caloria\n");
        printf("2. Caloria para Joule\n");
        printf("3. Kilocaloria para Joule\n");
        printf("4. Kilocaloria para Caloria\n");
        printf("5. Joule para Kilocaloria\n");
        printf("6. Caloria para Kilocaloria\n");
        printf("0. Voltar ao menu principal\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao >= 1 && opcao <= 6) {
            printf("Digite o valor a ser convertido: ");
            scanf("%f", &valor);
        }
        switch (opcao) {
            case 1:
                resultado = jouleParaCaloria(valor);
                break;
            case 2:
                resultado = caloriaParaJoule(valor);
                break;
            case 3:
                resultado = kilocaloriaParaJoule(valor);
                break;
            case 4:
                resultado = kilocaloriaParaCaloria(valor);
                break;
            case 5:
                resultado = jouleParaKilocaloria(valor);
                break;
            case 6:
                resultado = caloriaParaKilocaloria(valor);
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

float jouleParaCaloria(float joules) { 
    return joules * 0.239006; 
}
float caloriaParaJoule(float calorias) { 
    return calorias * 4.184; 
}
float kilocaloriaParaJoule(float kilocalorias) { 
    return kilocalorias * 4184.0; 
}
float kilocaloriaParaCaloria(float kilocalorias) { 
    return kilocalorias * 1000.0; 
}
float jouleParaKilocaloria(float joules) { 
    return joules / 4184.0; 
}
float caloriaParaKilocaloria(float calorias) { 
    return calorias / 1000.0; 
}
