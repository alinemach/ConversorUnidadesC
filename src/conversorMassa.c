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
