#include <stdio.h>
#include <assert.h>
#include <math.h>
#include "conversorPotencia.h"

#define EPSILON 0.0001

int main() {
    // Teste 1: wattsParaQuilowatts
    // 1000 W deve ser igual a 1 kW
    float resultado = wattsParaQuilowatts(1000.0f);
    assert(fabs(resultado - 1.0f) < EPSILON);

    // Teste 2: wattsParaCavaloVapor
    // 745.7 W deve ser aproximadamente 1 CV
    resultado = wattsParaCavaloVapor(745.7f);
    assert(fabs(resultado - 1.0f) < EPSILON);

    // Teste 3: quilowattsParaWatts
    // 1 kW deve ser igual a 1000 W
    resultado = quilowattsParaWatts(1.0f);
    assert(fabs(resultado - 1000.0f) < EPSILON);

    // Teste 4: quilowattsParaCavaloVapor
    // 1 kW deve ser aproximadamente 1.34 CV
    resultado = quilowattsParaCavaloVapor(1.0f);
    assert(fabs(resultado - 1.34f) < EPSILON);

    // Teste 5: cavaloVaporParaQuilowatts
    // 1 CV deve ser aproximadamente 0.746 kW
    resultado = cavaloVaporParaQuilowatts(1.0f);
    assert(fabs(resultado - 0.746f) < EPSILON);

    // Teste 6: cavaloVaporParaWatts
    // 1 CV deve ser aproximadamente 745.7 W
    resultado = cavaloVaporParaWatts(1.0f);
    assert(fabs(resultado - 745.7f) < EPSILON);

    printf("Todos os testes unitarios de conversorPotencia.c passaram!\n");
    return 0;
}
