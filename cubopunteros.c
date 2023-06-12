#include <stdio.h>

// Declaración de la función para calcular el cubo
int calcularCubo(int numero);

int main() {
    int numero;
    printf("Ingrese un número: ");
    scanf("%d", &numero);
    
    // Llamada a la función para calcular el cubo
    int cubo = calcularCubo(numero);
    
    printf("El cubo de %d es %d\n", numero, cubo);
    
    return 0;
}

// Definición de la función para calcular el cubo
int calcularCubo(int numero) {
    int cubo = numero * numero * numero;
    return cubo;
}
