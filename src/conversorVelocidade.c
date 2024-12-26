#include <stdio.h>
#include <stdlib.h>
//#include "conversorVelocidade.h"

//Obs: Não utilizei a opção acima porque o programa não compila, por isso, declarei as funções abaixo

float kmporhoraParamporseg(float kmporhora);
float mporsegParakmporhora(float mporseg);
float kmporhoraParamilhasporhora(float kmporhora);
float milhasporhoraParakmporhora(float milhasporhora);
float mporsegParamilhasporhora(float mporseg);
float milhasporhoraParamporseg(float milhasporhora);


//obs: declarando a função como void menuConversorVelocidade() o programa não compila, por isso, testei como int main()
int main() {
    system("chcp 65001>null"); // Configuração para UTF-8 no Windows
    int opcao;
    float valor, resultado;

    do {
        printf("\nConversor de Velocidade\n");
        printf("1. Quilômetros por hora para Metros por segundo\n");
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
                printf("Resultado = %.2f m/s\n", resultado);
                break;
            case 2:
                resultado = mporsegParakmporhora(valor);
                printf("Resultado = %.2f km/h\n", resultado);
                break;
            case 3:
                resultado = kmporhoraParamilhasporhora(valor);
                printf("Resultado = %.2f mph\n", resultado);
                break;
            case 4:
                resultado = milhasporhoraParakmporhora(valor);
                printf("Resultado = %.2f km/h\n", resultado);
                break;
            case 5:
                resultado = mporsegParamilhasporhora(valor);
                printf("Resultado = %.2f mph\n", resultado);
                break;
            case 6:
                resultado = milhasporhoraParamporseg(valor);
                printf("Resultado = %.2f m/s\n", resultado);
                break;
            case 0:
                printf("Voltar ao menu principal...\n");
                continue;
            default:
                printf("Opcao invalida. Tente novamente.\n");
                continue;
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
    return kmporhora / 1.609344; 
}
float milhasporhoraParakmporhora(float milhasporhora) { 
    return milhasporhora * 1.609344; 
}
float mporsegParamilhasporhora(float mporseg) { 
    return mporseg * 2.236936 ; 
}
float milhasporhoraParamporseg(float milhasporhora) { 
    return milhasporhora / 2.236936; 
}