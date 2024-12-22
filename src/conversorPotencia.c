#include <stdio.h>
#include "conversorPotencia.h"

void menuConversorPotencia() {
    int opcao;
    float valor, resultado;

    do {
        printf("\nConversor de Potencia\n");
        printf("1. Watts para Quilowatts\n");
        printf("2. Watts para CavaloVapor\n");
        printf("3. Quilowatts para Watts\n");
        printf("4. Quilowatts para CavaloVapor\n");
        printf("5. CavaloVapor para Watts\n");
        printf("6. CavaloVapor para Quilowatts\n");
        printf("0. Voltar ao menu principal\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao >= 1 && opcao <= 6) {
            printf("Digite o valor a ser convertido: ");
            scanf("%f", &valor);
        }
        switch (opcao) {
            case 1:
                resultado = wattsParaQuilowatts(valor);
                break;
            case 2:
                resultado = wattsParaCavaloVapor(valor);
                break;
            case 3:
                resultado = quilowattsParaWatts(valor);
                break;
            case 4:
                resultado = quilowattsParaCavaloVapor(valor);
                break;
            case 5:
                resultado = cavaloVaporParaWatts(valor);
                break;
            case 6:
                resultado = cavaloVaporParaQuilowatts(valor);
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

float wattsParaQuilowatts(float watts) { 
    return watts / 1000; 
}
float wattsParaCavaloVapor(float watts) { 
    return watts / 745.7; 
}
float quilowattsParaWatts(float quilowatts) { 
    return quilowatts * 1000; 
}
float quilowattsParaCavaloVapor(float quilowatts) { 
    return quilowatts * 1.34; 
}
float cavaloVaporParaQuilowatts(float cavaloVapor) { 
    return cavaloVapor * 0.746; 
}
float cavaloVaporParaWatts(float cavaloVapor) { 
    return cavaloVapor * 745.7; 
}
