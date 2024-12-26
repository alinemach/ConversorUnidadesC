#include <stdio.h> 

void converterParaQuilogramas(double valor) { 
    printf("Valor em quilogramas: %.2f kg\n", valor); 
    printf("Valor em gramas: %.2f g\n", valor * 1000); 
    printf("Valor em toneladas: %.2f t\n", valor / 1000); 
} 
    
void converterParaGramas(double valor) { 
    printf("Valor em quilogramas: %.2f kg\n", valor / 1000); 
    printf("Valor em gramas: %.2f g\n", valor); 
    printf("Valor em toneladas: %.2f t\n", valor / 1000000); 
} 

void converterParaToneladas(double valor) { 
    printf("Valor em quilogramas: %.2f kg\n", valor * 1000); 
    printf("Valor em gramas: %.2f g\n", valor * 1000000); 
    printf("Valor em toneladas: %.2f t\n", valor); 
} 

int main() { 
    int opcao; double valor; 
    
    do { 
        printf("\n=== Conversor de Unidades de Massa ===\n"); 
        printf("1. Converter de Quilograma\n"); 
        printf("2. Converter de Grama\n"); 
        printf("3. Converter de Tonelada\n"); 
        printf("4. Sair\n"); 
        printf("Escolha uma opcao: "); 
        scanf("%d", &opcao); 

        if (opcao == 4) { 
            printf("Saindo...\n"); 
            break; 
        } 
        
        printf("Digite o valor a ser convertido: "); 
        scanf("%lf", &valor); 
        
        switch (opcao) { 
            case 1: converterParaQuilogramas(valor); 
                break; 
            case 2: converterParaGramas(valor); 
                break; 
            case 3: converterParaToneladas(valor); 
                break; 
            default: printf("Opcao invalida! Tente novamente.\n"); 
        } 
    } while (opcao != 4); 
    
    return 0;
}