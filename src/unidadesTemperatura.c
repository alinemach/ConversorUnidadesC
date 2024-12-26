#include <stdio.h>

// Função para converter temperaturas entre Celsius, Kelvin e Fahrenheit
float converterTemperatura(float valor, char unidadeOrigem, char unidadeDestino) {
    float resultado;

    if (unidadeOrigem == 'C') { // Celsius
        if (unidadeDestino == 'K') {
            resultado = valor + 273; // Celsius para Kelvin
        } else if (unidadeDestino == 'F') {
            resultado = (valor * 9.0 / 5.0) + 32.0; // Celsius para Fahrenheit
        } else {
            resultado = valor; // Sem conversão
        }
    } else if (unidadeOrigem == 'K') { // Kelvin
        if (unidadeDestino == 'C') {
            resultado = valor - 273; // Kelvin para Celsius
        } else if (unidadeDestino == 'F') {
            resultado = (valor - 273) * 9.0 / 5.0 + 32.0; // Kelvin para Fahrenheit
        } else {
            resultado = valor; // Sem conversão
        }
    } else if (unidadeOrigem == 'F') { // Fahrenheit
        if (unidadeDestino == 'C') {
            resultado = (valor - 32.0) * 5.0 / 9.0; // Fahrenheit para Celsius
        } else if (unidadeDestino == 'K') {
            resultado = (valor - 32.0) * 5.0 / 9.0 + 273; // Fahrenheit para Kelvin
        } else {
            resultado = valor; // Sem conversão
        }
    } else {
        printf("Unidade de origem inválida. Use 'C', 'K' ou 'F'.\n");
        return -1; // Indica erro
    }

    return resultado;
}

void menuConversorTemperatura() {
    float valor, valorConvertido;
    char unidadeOrigem, unidadeDestino;

    printf("Digite o valor da temperatura: ");
    scanf("%f", &valor);

    printf("Digite a unidade de origem (C, K, F): ");
    scanf(" %c", &unidadeOrigem);

    printf("Digite a unidade de destino (C, K, F): ");
    scanf(" %c", &unidadeDestino);

    valorConvertido = converterTemperatura(valor, unidadeOrigem, unidadeDestino);

    if (valorConvertido != -1) {
        printf("Resultado: %.2f %c", valorConvertido, unidadeDestino);
    }

    return 0;
}