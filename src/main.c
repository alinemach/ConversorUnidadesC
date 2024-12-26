#include <stdio.h>
#include <stdlib.h>
#include "conversorEnergia.h"
#include "conversorPotencia.h"
#include "conversorComprimento.h" // Incluindo o cabeçalho do conversor de comprimento

int main() {
    int opcao;

    do {
        printf("Menu Principal\n");
        printf("1. Unidades de energia\n");
        printf("2. Unidades de comprimento\n"); // Atualizando para ativar o menu de comprimento
        //printf("3. Unidades de massa\n");
        //printf("4. Unidades de volume\n");
        //printf("5. Unidades de temperatura\n");
        //printf("6. Unidades de velocidade\n");
        printf("7. Unidades de potencia\n");
        //printf("8. Unidades de area\n");
        //printf("9. Unidades de tempo\n");
        //printf("10. Tamanho de dados digitais\n");
        printf("0. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                menuConversorEnergia();
                break;
            case 2:
                menuConversorComprimento(); // Chamando o menu do conversor de comprimento
                break;
            case 7:
                menuConversorPotencia();
                break;
         /*  case 3:
                menuConversorMassa();
                break; 
            case 4:
                menuConversorVolume();
                break;
            case 5:
                menuConversorTemperatura();
                break;
            case 6:
                menuConversorVelocidade();
                break; 
            case 8:
                menuConversorArea();
                break;
            case 9:
                menuConversorTempo();
                break;
            case 10:
                menuConversorTamanhoDadosDigitais();
                break;*/ 
            case 0:
                printf("Encerrando o programa.\n");
                break;
            default:
                printf("Opcao invalida. Tente novamente.\n");
        }
    } while (opcao != 0);
    return 0;
}
