#include <stdio.h>
#include "conversorArea.h"

void menuConversorArea() {
    int opcao;
    float valor, resultado;

    do {
        printf("\nConversor de Area\n");
        printf("1. Quilometro Quadrado para Metro Quadrado\n");
        printf("2. Quilometro Quadrado para Centimetro Quadrado\n");
        printf("3. Metro Quadrado para Quilometro Quadrado\n");
        printf("4. Metro Quadrado para Centimetro Quadrado\n");
        printf("5. Centimetro Quadrado para Quilometro Quadrado\n");
        printf("6. Centimetro Quadrado para Metro Quadrado\n");
        printf("0. Voltar ao menu principal\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao >= 1 && opcao <= 6) {
            printf("Digite o valor a ser convertido: ");
            scanf("%f", &valor);
        }
        switch (opcao) {
            case 1:
                resultado = quilometro2ParaMetro2(valor);
                break;
            case 2:
                resultado = quilometro2ParaCentimetro2(valor);
                break;
            case 3:
                resultado = metro2ParaQuilometro2(valor);
                break;
            case 4:
                resultado = metro2ParaCentimetro2(valor);
                break;
            case 5:
                resultado = centimetro2ParaQuilometro2(valor);
                break;
            case 6:
                resultado = centimetro2ParaMetro2(valor);
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

float quilometro2ParaMetro2(float km2) { 
    return km2 * 1000000; 
}
float quilometro2ParaCentimetro2(float km2) { 
    return km2 * 10000000000; 
}
float metro2ParaQuilometro2(float m2) { 
    return m2 / 1000000; 
}
float metro2ParaCentimetro2(float m2) { 
    return m2 * 10000; 
}
float centimetro2ParaQuilometro2(float cm2) { 
    return cm2 / 10000000000; 
}
float centimetro2ParaMetro2(float cm2) { 
    return cm2 / 10000; 
}
